#include "stdafx.h"
#include <stdbool.h>
#include <stdio.h>

bool is_prime(int n)
{
	int divisor;

	if (n <= 1)
		return false;
	for (divisor = 2; divisor * divisor <= n; divisor++)
		if (n % divisor == 0)
			return false;
	return true;
}

int main(void)
{
	int i;

	printf("Enter a number: ");
	scanf("%d", &i);             //"%d\n" always raise problem
	if (is_prime(i))
		printf("Prime.\n");
	else
		printf("Not a prime.\n");

	return 0;
}