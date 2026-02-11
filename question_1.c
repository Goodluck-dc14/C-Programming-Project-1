#include <stdio.h>

/**
 * main - Calculates rectangle area and prints output
 * Return: Always 0
 */
int main(void)
{
	int length = 10;
	int width = 5;
	int area;

	area = length * width;
	printf("Length: %d, Width: %d\n", length, width);
	printf("The area of the rectangle is: %d\n", area);

	return (0);
}

