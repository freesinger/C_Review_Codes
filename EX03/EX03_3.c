#include <stdio.h>

int main(void)
{
	int input, num[20];
	int counter = 1, j = 0;

	printf("Enter less than 5 number(0 ~ 9): ");
	input = getchar();

	while (input != '\n') {
		for (int i = 0; i < j; i++) {
			if (input != num[i])
				counter++;
		}
		if (input != ' ')
			num[j++] = input;
		input = getchar();
	}

	switch (counter) {
	    case 1: case 2: putchar('0'); break;
	    case 3: putchar('6'); break;
	    case 4: putchar('8'); break;
	}

	return 0;
}