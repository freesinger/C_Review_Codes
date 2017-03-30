#include "stdafx.h"
#include<stdio.h>
#include<malloc.h>
#include<string.h>

int main(void)
{
	char str1[100], str2[5][5] = { "from","in","at","an","on" }, *pstr;
	puts("Input the text: ");
	gets_s(str1);

	for (int i = 0; i < 5; i++)
	{
		pstr = (char*)malloc(strlen(str2[i]) * sizeof(char));
		pstr = strstr(str1, str2[i]);
		free(pstr);
	}

	puts(str1);
	
	return 0;
}