#include <stdio.h>
/**
 * main -main function
 *
 * Return: always 0
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0 ; a < 7 ; a++)
	{
		for (b = 1 ; b < 8 ; b++)
		{
			for (c = 2 ; c < 9 ; c++)
			{
				if (a < b && b < c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					if (a + b + c != 24)
					{
						continue;
					}
						putchar(',');
						putchar(' ');
				}
			}
		}

	putchar('\n');

	return (0);
}
