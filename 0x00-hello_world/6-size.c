#include <stdio.h>
/**
 * main - A programme that prints the sizes of various types of computers
 * Return 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %zu byte(s)\n", sizeof(char));
printf("size of an int: %zu byte(s)\n", sizeof(int));
printf("size of a long int: %zu byte(s)\n", sizeof(long int));
printf("size of a long long int:%zu byte(s)\n, sizeof(long long int));
printf("size of a float: %zu byte(s)\n", sizeof(float)));
return (0)
}
