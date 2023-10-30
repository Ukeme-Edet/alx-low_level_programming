#include "main.h"
#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_magic - prints the magic numbers
 * @e_ident: the magic numbers
 */
void print_magic(unsigned char (*e_ident)[EI_NIDENT])
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", (*e_ident)[i]);
	printf("\n");
}

/**
 * print_class - prints the class of the file
 * @e_ident: the magic numbers
 */
void print_class(unsigned char (*e_ident)[EI_NIDENT])
{
	printf("  Class:                             ");
	switch ((*e_ident)[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", (*e_ident)[EI_CLASS]);
	}
}

/**
 * print_data - prints the data encoding of the file
 * @e_ident: the magic numbers
 */
void print_data(unsigned char (*e_ident)[EI_NIDENT])
{
	printf("  Data:                              ");
	switch ((*e_ident)[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", (*e_ident)[EI_DATA]);
	}
}

/**
 * print_version - prints the version of the file
 * @e_ident: the magic numbers
 */
void print_version(unsigned char (*e_ident)[EI_NIDENT])
{
	printf("  Version:                           %d", (*e_ident)[EI_VERSION]);
	switch ((*e_ident)[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
	}
}

/**
 * print_osabi - prints the OS/ABI of the file
 * @e_ident: the magic numbers
 */
void print_osabi(unsigned char (*e_ident)[EI_NIDENT])
{
	printf("  OS/ABI:                            ");
	switch ((*e_ident)[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", (*e_ident)[EI_OSABI]);
	}
}

/**
 * print_abiversion - prints the ABI version of the file
 * @e_ident: the magic numbers
 */
void print_abiversion(unsigned char (*e_ident)[EI_NIDENT])
{
	printf("  ABI Version:                       %d\n", (*e_ident)
															[EI_ABIVERSION]);
}

/**
 * print_type - prints the type of the file
 * @e_type: the type of the file
 */
void print_type(unsigned int e_type)
{
	printf("  Type:                              ");
	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - prints the entry point address
 * @e_entry: the entry point address
 */
void print_entry(unsigned long int e_entry)
{
	printf("  Entry point address:               0x%lx\n", e_entry);
}

/**
 * print_elf_header - prints the ELF header
 * @e_hdr: pointer to the ELF header struct
 */
void print_elf_header(Elf64_Ehdr *e_hdr)
{
	printf("ELF Header:\n");
	print_magic(&(e_hdr->e_ident));
	print_class(&(e_hdr->e_ident));
	print_data(&(e_hdr->e_ident));
	print_version(&(e_hdr->e_ident));
	print_osabi(&(e_hdr->e_ident));
	print_abiversion(&(e_hdr->e_ident));
	print_type(e_hdr->e_type);
	print_entry(e_hdr->e_entry);
}

/**
 * main - displays the information contained in the ELF header at the start of
 *        an ELF file
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr e_hdr;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(98);
	}

	if (read(fd, &e_hdr, sizeof(e_hdr)) != sizeof(e_hdr))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (e_hdr.e_ident[EI_MAG0] != ELFMAG0 ||
		e_hdr.e_ident[EI_MAG1] != ELFMAG1 ||
		e_hdr.e_ident[EI_MAG2] != ELFMAG2 ||
		e_hdr.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file %s\n", argv[1]);
		exit(98);
	}

	print_elf_header(&e_hdr);

	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(98);
	}

	return (0);
}
