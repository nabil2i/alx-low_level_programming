#include <stdio.h>
/**
 * main - printthe alphabet in lowercase followed
 * by a new line, donb't print 'e' and 'q'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c < 123)
	{	
		if (c != 'e' && c != 'q')
		{
			putchar(c);
			c++;
		}
		else
		{
			c++;
		}
	}
	putchar('\n');
	return (0);
}
