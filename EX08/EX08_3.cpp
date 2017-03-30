#include "stdafx.h"
#include <stdio.h>

void design_a(void)
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			putchar('&');
		putchar('\n');
	}
}

void design_b(void)
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			putchar('$');
		putchar('\n');
	}
}

int main(void)
{
	int x, ch;

	for (x = 0; x < 20; x++)
		putchar('*');
	printf("\n*   Menu section   *");
	printf("\n*   1. Design(&)   *");
	printf("\n*   2. Design($)   *");
	printf("\n*   3. Exit        *\n");
	for (x = 0; x < 20; x++)
		putchar('*');

	printf("\nChoose option: ");
	scanf("%d", &ch);				// ch = getchar();
	switch (ch) {
	case 1:							// case '1':
		design_a();
		break;
	case 2:
		design_b();
		break;
	case 3:
		return 0;
	default:
		printf("Error input\n");
		break;
	}

	return 0;
}