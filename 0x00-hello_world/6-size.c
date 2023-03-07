#include <stdio.h>



/**
 * main - Prints the size of various types of computer
 * Return: Always 0.
 */


int main(void)

{
	printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(1));
	printf("Size of a int: %zu byte(s)\n", (unsigned long)sizeof(4));
	printf("Size of a long int: %zu  byte(s)\n", (unsigned long)sizeof(8));
	printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(8));
	printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(4));
	return (0);
}
