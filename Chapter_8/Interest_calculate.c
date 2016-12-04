/* Print a table of compound interest */

#include <stdio.h>

#define VALUE_SIZE ((int)(sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100

int main(void)
{
	int i, low_rate, year, t;
	double value[5];

	printf("Enter interest rate: ");
	scanf("%d", &low_rate);
	printf("Enter number of years: ");
	scanf("%d", &year);

	printf("\nYears");
	for (i = 0; i < VALUE_SIZE; i++) {
		printf("%6d%%", low_rate + i); //printf("%6d%", low_rate + i)
		value[i] = INITIAL_BALANCE;
	}
	printf("\n");

	for (t = 1; t <= year; t++) {
		printf("%3d   ", t);
		for (i = 0; i < VALUE_SIZE; i++) {
			value[i] += (i + low_rate) / 100.0f * value[i]; //value[i] = (1 + (i + low_rate) / 100.0f) * value[i];
			printf("%7.2f", value[i]);
		}
		printf("\n");
	}
	
	return 0;
}