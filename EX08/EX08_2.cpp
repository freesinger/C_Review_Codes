#include "stdafx.h"
#include <stdio.h>

int max_factor(int i, int j)
{
	int factor, temp;

	if (i < j)
		temp = i;
	else
		temp = j;

	for (int k = 1; k <= temp; k++)
		if (i % k == 0 && j % k == 0)
			factor = k;
	
	return factor;
}

int least_mult(int i, int j)
{
	int temp;
	
	if (i <= j) {
		for (temp = j; ; temp++)
			if (temp % i == 0 && temp % j == 0)
				break;
		return temp;
	}
	else {
		for (temp = i; ; temp++)
			if (temp % i == 0 && temp % j == 0)
				break;
		return temp;
	}
}

int main(void)
{
	int i, j;

	printf("Enter 2 integers: ");
	scanf("%d%d", &i, &j);

	printf("Max factor: %d\n", max_factor(i, j));
	printf("Least multiple: %d\n", least_mult(i, j));
	return 0;
}