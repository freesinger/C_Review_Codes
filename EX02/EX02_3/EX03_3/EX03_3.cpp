// EX03_3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#define PI 3.1415926

int main(void)
{
	double radium, height;
	double perimeter, area, surface_area, 
		   ball_volume, cylinder_volume;

	printf("Enter the radium and height: ");
	scanf("%lf%lf", &radium, &height);

	perimeter = 2 * PI * radium;
	area = PI * radium * radium;
	surface_area = 4 * PI * radium * radium;
	ball_volume = 4 / 3 * PI * radium * radium;
	cylinder_volume = 2 * area + perimeter * height;

	printf("Perimeter of circle is: %.2f\n", perimeter);
	printf("Area of circle is: %.2f\n", area);
	printf("Surface area of ball is: %.2f\n", surface_area);
	printf("Volume of ball is: %.2f\n", ball_volume);
	printf("Volume of cylinder is: %.2f\n", cylinder_volume);
	
    return 0;
}