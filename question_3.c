#include <stdio.h>

/**
 * factorial - Recursive function to find factorial
 * @n: The number
 * Return: Factorial result
 */
int factorial(int n)
{
	if (n <= 1) /* Base Case */
		return (1);
	return (n * factorial(n - 1));
}

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int num = 5;

	printf("Factorial of %d is %d\n", num, factorial(num));
	return (0);
}