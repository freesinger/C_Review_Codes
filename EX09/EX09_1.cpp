#include "stdafx.h"
#include <stdio.h>

#define N 20

char *delete_cha(char *str, int cha)
{
	int j, k;

	for (j = k = 0; *(str + j) != '\0'; j++)
		if (*(str + j) != cha)
			*(str + k++) = *(str + j);
	*(str + k) = '\0';

	return str;
}

int main(void)
{
	int i = 0, ch;
	char str[N], *p;

	printf("Enter string: ");
	gets_s(str);
	/*
	while ((ch = getchar()) != '\n')
		if (i < N)
			*p++ = ch;
	*p = '\0';
	*/

	printf("Enter character: ");
	ch = getchar();

	p = str;
	printf("Result: %s\n", delete_cha(p, ch));

	return 0;
}