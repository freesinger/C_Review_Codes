#include "stdafx.h"
#include <stdio.h>

float area_tri(float length, float height)
{
	return length * height / 2;
}

int main(void)
{
	float len, h;
	float area;
	
	printf("Enter the length and height: ");
	scanf("%f%f", &len, &h);

	area = area_tri(len, h);
	printf("Area of triangle: %3.2f\n", area);
	
	return 0;
}