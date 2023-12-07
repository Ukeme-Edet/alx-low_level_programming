def is_palindrome(n: int) -> bool:
    """Return True if n is a palindrome."""
    s = str(n)
    return s == s[::-1]


def largest_palindrome_product(n: int) -> list[int]:
    for i in range(10**n - 1, 10**(n - 1) - 1, -1):
        for j in range(10**n - 1, 10**(n - 1) - 1, -1):
            if is_palindrome(i * j):
                return [i, j, i * j]


def main() -> None:
    with open("102-result", "w") as f:
        f.write(str(largest_palindrome_product(3)[2]) + "\n")
        f.close()


if __name__ == "__main__":
    main()
