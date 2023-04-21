#include "main.h"
/**
*is_palindrome - returns 1 if a string is a palindrome and 0 if not.
*@s: the string value to be checked
*Return: string
*/
int is_palindrome(char *s)
{
	if (*s == '0')
	{
		return (1);
	}
	return (checkPalindrome(s));
}
/**
*checkPalindrome - check if a string is palindrome
*@s: the string value to be checked
*Return: string
**/
int checkPalindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
	{
		return (0);
	}
	return (1);
}

/**
  * _strlen_recursion - Get the length of a string
  * @s: the string to get the length
  *
  * Return: the string length
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
