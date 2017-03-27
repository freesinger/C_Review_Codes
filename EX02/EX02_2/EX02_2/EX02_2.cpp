// EX02_2.cpp : ��������̨Ӧ�ó��������ڵ㡣
//

#include "stdafx.h"


int main(void)
{
	int a = 7, b = 3;
	char c1 = 'a', c2 = 66;
	float  x = 12.25;
	double y = 1.3333333333;
	long  d = 5432789;

	a = x + b*x + y / 2 - d % (c1 - c2);

	printf("a = %d, b = %d, c1 = %x\n", a, b, c1);    //41, 3, 61
	printf("d = %ld, x = %f, y = %10.2f\n", d, x, y); //5432789, 12.250000, 0000001.33

	// a输出的是算式运算之后的结果，c1输出的a的ASCII码
	// ld精度大于d，10.2f表示字宽10位精度2位
	
    return 0;
}

