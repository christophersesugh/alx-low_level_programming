#include <stdio.h>

/**
* main - print alphabet except q and e
* return: 0 (success)
*/
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
			continue;
		else
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
