#include "stdafx.h"
#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[6][30], temp[30], (*p)[30];
	int i, j, k, n = 6;

	printf("Enter 6 strings：\n");

	for (i = 0; i < n; i++)
		gets_s(str[i]);

	p = str;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
			if (strcmp(*(p + k), *(p + j)) > 0)
				k = j;
		if (k != i)
		{
			strcpy(temp, *(p + i));
			strcpy(*(p + i), *(p + k));
			strcpy(*(p + k), temp);
		}
	}
	printf("\nSorted strings：\n");
	for (i = 0; i < n; i++)
		printf("%s\n", *(p + i));

	return 0;
}