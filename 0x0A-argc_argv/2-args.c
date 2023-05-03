#include "main.h"
#include <stdio.h>

/**
*main - prints all the args content
*@argc: argument count
*@argv: argument vector
*Return: Always zero
*/
int main(int argc, char *argv[])
{
	int num;

	for (num = 0; num < argc; num++)
	{
		printf("%s\n", argv[num]);
	}
	return (0);
}
