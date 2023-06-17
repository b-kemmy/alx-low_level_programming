#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Calculates the last digit of a number and states whether it is greater than 5, equals to zero, or is less than 6 and not zero
 *
 * Return: Always 0.
 */

int main(void)
{
	int n, last_digit_of_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit_of_n = n % 10;
	if (last_digit_of_n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit_of_n);
	}
	else if (last_digit_of_n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit_of_n);
	}
	else if (last_digit_of_n < 6 && last_digit_of_n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		n, last_digit_of_n);
	}
	return (0);
}
