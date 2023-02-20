#include <stdio.h>

/**
 * main - main function
 *
 * Return: as stated
 */

int main(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
		putchar(i  + 'q');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(i);
	putchar('\n');
	return (0);

}
