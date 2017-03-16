#include <stdio.h>
#include <math.h>

int main(void)
{
	int i;
	float temp = 1, x;

	for (i = 1;; i++) {
		while (i > 0) {
			x *= x;
			i *= i;
			i--;
		}
		temp += x / i;
		if (x / i < 1e-6) {
			printf("Result is: %f\n", log(temp));
			break;
		}
	}

	return 0;
}