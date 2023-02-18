#include <stdio.h>

/**
 * main - Prints combination of  numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;
	i = j = k = 48;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
           	 	k = 48;
            		while (k < 58)
            		{
               			if ((i != j && j != k && i != k) && (i < j && j < k))
                		{
                    			putchar(i);
                   			putchar(j);
                    			putchar(k);

                    			if (i == 57 && j == 56 && k == 55)
                    			{
                        			break;
                   			}
                    			putchar(',');
                   			putchar(' ');
               			 }
                		 k++;
            		}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
