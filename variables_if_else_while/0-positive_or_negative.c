/*
 * File: 0-positive_or_negative.c
 * Auth: Brennan D Baraban
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf(%d is positiven, n);
	}
	else if (n < 0)
	{
		printf(%d is negativen, n);
	}
	else
	{
		printf(%d is zeron, n);
	}

	return (0);
}

