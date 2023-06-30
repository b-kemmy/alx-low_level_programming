#include "main.h"
/**
 * rot13 - Write a function that encodes a string using rot13
 *
 * @hi: This is my input string
 *
 * Return: String converted to rot13
 *
 */

char *rot13(char *hi)
{
	int i, j;

	char minus[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char mayus[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; hi[i] != '\0'; ++i)
	{
		for (j = 0; minus[j] != '\0' ; j++)
		{
			if (hi[i] == minus[j])
			{
				hi[i] = mayus[j];
				break;
			}
		}
	}
	hi[i] = '\0';
	return (hi);
}
