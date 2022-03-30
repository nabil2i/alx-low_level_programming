#include "main.h"

int palindrome(char *s, int a, int b);
int strlen_rec(char *s);

/**
 * strrec - computes length of string
 * @s: string to compute the length of
 * Return: length
 */
int strlen_rec(char *s)
{
	if (!*s)
		return (0);
	return (1 + strlen_rec(s + 1));

}
/**
 * is_palindrome - checks if the string is a palindrome
 * @s: pointer to string to be checked
 * Return: 1 if s is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int l;

	l = strlen_rec(s);
	if (l == 0)
		return (1);
	return (palindrome(s, 0, l - 1));
}

/**
 * palindrome - checks if string is palindrome
 * @s: string to be checked
 * @a: counter from left end
 * @b: counter from right end
 * Return: 1 is s is palindrome, 0 if not
 */
int palindrome(char *s, int a, int b)
{
	if (a == b)
		return (1);
	if (s[a] != s[b])
		return (0);
	if (a < b)
		return (palindrome(s, a + 1, b - 1));
	return (1);
}
