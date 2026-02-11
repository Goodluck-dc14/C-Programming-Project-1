#include <stdio.h>

/**
 * main - Menu-driven bank simulation
 * Return: Always 0
 */
int main(void)
{
	int choice;
	float balance = 1000.0;

	while (1)
	{
		printf("\n1. Check Balance\n2. Exit\nEnter choice: ");
		scanf("%d", &choice);

		if (choice == 2)
			break;

		switch (choice)
		{
			case 1:
				printf("Balance: $%.2f\n", balance);
				break;
			default:
				printf("Invalid choice, try again.\n");
				continue;
		}
	}
	return (0);
}