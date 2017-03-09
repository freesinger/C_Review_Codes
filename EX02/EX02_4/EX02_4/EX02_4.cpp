// EX02_4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main(void)
{
	char num1, num2, num3, num4;

	printf("Enter two hex numbers: ");
	scanf("%c%c %c%c", &num1, &num2, &num3, &num4);

	printf("Linked number is: %c%c%c%c\n",
			num3, num4, num1, num2);

	return 0;

	/*int hex[4], ch, i = 0;
	
	printf("Enter two hex number: ");
	while ((ch = getchar()) != ' ' && (ch = getchar()) != '\n')
		hex[i++] = ch;

	printf("Linked number is: ");
	for (i = 0; i < 4; i++)
		putchar(hex[i]);
	printf("h\n");

	return 0; */
}

