// EX02_1.cpp : ��������̨Ӧ�ó��������ڵ㡣
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

	//考察的是运算符优先级以及强制类型转换
	
    return 0;
}