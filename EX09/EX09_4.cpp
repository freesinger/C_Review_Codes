#include "stdafx.h"
#include <math.h>
#include <stdio.h>

double integral(double(*fun)(double x), double a, double b, int n)
{
	double sum, step, result;
	int i;

	sum = (fun(a) + fun(b)) / 2;
	step = (b - a) / n; /*积分步长*/
	for (i = 1; i<n; i++)
		sum = sum + fun(a + i * step);
	result = sum * step;

	return result;/*返回积分值*/
}

double function(double x)
{
	return (x * x + exp(x) * sin(x));  /*修改此处可以改变被积函数*/
}

void main()
{
	double result;
	result = integral(function, 1.0, 2.0, 150);/*修改此处可以改变积分上下限和步长*/
	printf("result=%f\n", result);
}