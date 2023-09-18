#include "main.h"
/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: The input string to print
 * Return: None (void)
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
