#include "main.h"
#include <stdio.h>
#include  "2-strlen_recursion.c"

/**
 * checker - checks if string is palindrome or not.
 * @s: pointer to the null-terminated byte string to be examined.
 * @length: highest index of string.
 * @a: lowest index of string.
 *
 * Return: 1 if true, 0 if not.
 */

int checker(char *s, int length, int a)
{
	if (length <= a)
		return (1);
	if (s[length] != s[a])
		return (0);
	return (checker(s, length - 1, a + 1));
}

/**
 * is_palindrome - check if a string is palindrome or not.
 * @s: the string to be analyzed.
 *
 * Return: 1 if s is palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int length;

	if (s[0] == '\0')
		return (1);
	length = _strlen_recursion(s);

	return (checker(s, length - 1, 0));
}
