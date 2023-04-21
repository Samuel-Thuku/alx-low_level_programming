#include "main.h"
#include <stdio.h>
/**
*is_prime_number - prime numbers
*@n: the number to be checked
*Return: the integer value
**/
int is_prime_number(int n)
{
	return (checkPrime(n, 1));
}

/**
*checkPrime - check if number is prime
*@num1: the number to be checked
*@num2: the iteration times
*Return: 1 for prime or 0 for other
*/
int checkPrime(int num1, int num2)
{
	if (num1 <= 1)
	{
		return (0);
	}
	if (num1 % num2 == 0 && num2 > 1)
	{
		return (0);
	}
	if ((num1 / num2) < num2)
	{
		return (1);
	}
	return (checkPrime(num1, num2 + 1));
}
