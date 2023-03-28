#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int num1, num2, num3, num4, num5, num6;

	num1 = 0;
	num2 = 0;
	num3 = 0;
	num4 = 0;
	num5 = 0;
	num6 = 0;

	while (s[num4] != '\0')
		num4++;

	while (num1 < num4 && num5 == 0)
	{
		if (s[num1] == '-')
			++num2;

		if (s[num1] >= '0' && s[num1] <= '9')
		{
			num6 = s[num1] - '0';
			if (num2 % 2)
				num6 = -num6;
			num3 = num3 * 10 + num6;
			num5 = 1;
			if (s[num1 + 1] < '0' || s[num1 + 1] > '9')
				break;
			num5 = 0;
		}
		num1++;
	}

	if (num5 == 0)
		return (0);

	return (num3);
}

