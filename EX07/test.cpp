#include "stdafx.h"
#include <string.h>

int main(void)
{
	int res[100] = { 0 }, j = 0, acc = 0; 
	char string[100], *str = string;
	int ch, i = 0, len = strlen(string);
	
	printf("Enter the string: ");
 
	while ((ch = getchar()) != '\n')
        if (i < len)
            string[i++] = ch;
    string[i] = '\0';
	
	/* printf("%s\n", string); */        // PASS:printf("%s\n", str);
	/* str = string; */					 
	/* printf("%d\n", len); */

	for (int i = 0; i < len; i++) {
		if (*(str + i) >= '0' && *(str + i) <= '9') {
			res[j] = res[j] * 10 + *(str + i) - 48;
		}
		else {
			j++;
			continue;
		}
	}

	printf("Numbers: ");
	for (int i = 0; i < 100; i++) {
		if (res[i] != 0) {
			printf("%d ", res[i]);
			acc++;
		}
	}

	printf("\nTotal %d numbers\n", acc);

	return 0;
}

/* 
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
} */
