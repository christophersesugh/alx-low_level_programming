#include <stdio.h>

/**
 * main - Prints combination of  numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, j = 0;

	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			if ((i != j) && (i < j))
			{	
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j / 10 + '0');
				if (i == 98 && j == 99)
					break;
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
