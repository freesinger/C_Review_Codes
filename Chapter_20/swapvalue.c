#include <stdio.h>

unsigned short swap_bytes(unsigned short i)
{
	unsigned short high_bytes = i << 8;
	unsigned short low_bytes = i >> 8;

	return high_bytes | low_bytes;
}

int main(void)
{
	int input;
	
	printf("Enter a hexadecimal number (up to four digits): ");
	scanf("%hx", &input);       //%hx for hexadecimal number 

	printf("Number with bytes swapped: %hx\n", swap_bytes(input));

	return 0;
}