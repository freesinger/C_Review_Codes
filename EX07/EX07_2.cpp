#include "stdafx.h"
#include <string.h>
#include <ctype.h>

int multyten(int i, int counter)
{
	while (counter > 0)
		i *= 10;

	return i;
}

int main(void)
{
	char *str = "a123x456s17960?302tab5876";
	int len = strlen(str),temp = 0;
	int res[100], j = 0, count = 0;

	for (int i = len - 1; i >= 0; i--) {
		if (*(str + i) >= '0' && *(str + i) <= '9') {     //if (isdigit(*(str + i))) {
			temp += multyten(*(str + i) - 48, count);
			count++;
		}
		else {
			count = 0;
			res[j++] = temp;
			temp = 0;
		}
	}

	for (int i = 0; i < 100; i++) {
		if (res[i] != 0)
			printf("%d ", res[i]);
	}
	printf("\n");

	return 0;
}
