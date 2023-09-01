#include <stdio.h>
#include "main.h"

/**
 * main - it does prints all arguments it receives
 * @argc: is number of arguments
 * @argv: is array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
