#include <stdio.h>

/**
 * main - prints the size of various types on the computer it is compiled and run on
 * Return: Always 0
 */

int main(void)
{
	char c;
	int i;
	long int a;
	long long int b;
	float f;

	printf("Size of a char: %li byte(s)\n", sizeof(c));
	printf("Size of an int: %li byte(s)\n", sizeof(i));
	printf("Size of a long int: %li byte(s)\n", sizeof(a));
	printf("Size of a long long int: %li byte(s)\n", sizeof(b));
	printf("Size of a float: %li byte(s)\n", sizeof(f));


	return (0);
}
