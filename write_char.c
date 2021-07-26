#include "holberton.h"
/**
 *write_char - writes the character c to stdout
 *@c: the character to print
 *Return: Always 0 (success)
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}
