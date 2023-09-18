#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to reverse
 * Return: None (void)
 */
void rev_string(char *s)
{
	int length = 0;
	int i, j;
	char temp;

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	/* Swap characters from the beginning and end of the string */
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
