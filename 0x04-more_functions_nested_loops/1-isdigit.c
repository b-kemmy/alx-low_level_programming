#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9)
 *@c: c - variable
 * Return: 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
