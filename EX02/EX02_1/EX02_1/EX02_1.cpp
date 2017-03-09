// EX02_1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main(void)
{
	int x = 3, y = -4, z = 4;
	float k = 3.5;

	printf("%d\n", x++-y+++z); //11
	printf("%d\n", y>z||z>2&&x++); //1
	printf("%d\n", x|z&x^z);  //5
	printf("%d\n", x - y + !z - 1 && x + y / 2); //1
	printf("%f\n", y + (x / 3 * (int)(x + k)/2) % 4); //0.000000

    return 0;
}