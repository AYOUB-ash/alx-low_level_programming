#include "main.h"

/**
 * get_endianness - functin check for the endiannes
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
