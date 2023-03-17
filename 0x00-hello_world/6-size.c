#include <stdio.h>

/**
 * main - Entry Point
 * printf - Print strings
 * @char: Varibale
 * @int: Variable
 * @long: Variable
 * @lon long: Variable
 * @float: Varible
 *
 * Return: Always 0 success
 */

 int main(void)
 {
 	char;
	int;
	long int;
	long long int;
	float;

	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of float: %lu byte(s)\n", sizeof(float));

	return (0);
}
