#include "main.h"
/**
 * rev_string - reverses a string
 * @s: Input string
 * Return: a string in reverse
 */
void rev_string(char *s)
{
	char rev = s(0);
	int counter = 0;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; 1++)
	{
		counter__;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
