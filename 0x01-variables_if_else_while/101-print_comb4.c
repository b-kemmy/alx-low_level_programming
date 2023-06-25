#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;
		for (i = 0; i < 8; i++)
		{
			for (j = i + 1 ; j < 9; j++)
			{
				for (k = i + 2; k < 10; k++)
				{
					
					if (i == j || j == k || k == i)
					{
						continue;
					}
					putchar((i % 10) + '0');
					putchar((j % 10) + '0');
					putchar((k % 10) + '0');

					if (i == 7 && j == 8 && k == 9)
					{
						continue;
					}

						putchar(',');
						putchar(' ');
				}
			}
		}
		putchar ('\n');

		return (0);
}
