#include "stdafx.h"
#include<stdio.h>
#include<string.h>

#define N 30

int main(void)
{
	char string[N], string_b[N], *p, *q;
	int i = 0, j = 0, len, ch;

	printf("Enter your string: ");
	while ((ch = getchar()) != '\n')
		if (i < N)
			string[i++] = ch;
	string[i] = '\0';

	len = strlen(string);
	printf("String length: %d\n", len);
	printf("Orignal string is: %s\n", string);
	printf("Reversed string is: ");
	
	strcpy(string_b, string);
	q = string_b;				//*q point to the copy
	p = string;

	for (i = len - 1; i >= 0; i--) {
		putchar(*(q + i));
		*(p + j++)= *(q + i);	// write to orignal string
	}
	printf("\n");

	printf("Orignal string now is: %s\n", string);

	return 0;
}