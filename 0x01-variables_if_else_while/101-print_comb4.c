#include <stdio.h>
/**
 * main - print all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;
	
	for (i = 48; i < 57; i++)
	{
		for (j = 49; j < 58; j++)
		{       	
			for (k = 50; k < 58; k++)
			{
				if (j > i && k > j)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 || j !=56 || k != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
