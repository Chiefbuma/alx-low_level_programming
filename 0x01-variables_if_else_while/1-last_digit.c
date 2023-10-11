#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - get the last digit of a variable
 * Return: 0 on succes
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printif("Last digit of %d is %d and is greater than 5/n", n, n % 10)
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is zero/n", n, n % 10)
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0/n", n, n % 10)
	}
	return (0);
}
