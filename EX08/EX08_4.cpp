#include "stdafx.h"
#include <stdio.h>
#include <math.h>

static float a1, a2;
float p1, p2;

void dif_solid(int a, int b, float t)
{
	a1 = (-b + t) / 2 * a;
	a2 = (-b - t) / 2 * a;
}

float same_res(int a, int b, float t)
{
	return (-b + t) / 2 * a;
}

void dif_vir(int a, int b, float j)
{
	p1 = -b / 2 * a;
	p2 = sqrt(-j) / 2 * a;

}
int main(void)
{
	int a, b, c;

	printf("Enter a, b, c: ");
	scanf("%d%d%d", &a, &b, &c);

	int judge = b * b - 4 * a * c;
	float t = sqrt(judge);

	if (judge > 0) {
		dif_solid(a, b, t);
		printf("Result are: %.2f %.2f\n", a1, a2);
	}
	else if (judge == 0)
		printf("Result is: %.2f\n", same_res(a, b, t));
	else {
		dif_vir(a, b, judge);
		printf("Result are: %.2f + %.2fi, %.2f + %.2fi\n", p1, p2, p1, p2);
	}

	return 0;
}