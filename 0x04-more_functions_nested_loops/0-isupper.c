#include "main.h"

/**
 * _isupper - Checks if the letter is in uppercase
 * 0x: The number to be checked
 * Return: 1 for uppercase letters and 0 for anything else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
