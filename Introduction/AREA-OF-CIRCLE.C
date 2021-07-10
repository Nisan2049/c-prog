/*******************************************
Statement - Area of Circle
Code By -  Nishan Lamichhane
Visit my Website - http://nisanlamichhane.com.np
********************************************/

#include <stdio.h>
#include <conio.h>

void main()
{
	int r;
    float ar;
    const pi=3.14;
	clrscr();
	printf("Enter radius\n");
	scanf("%d", &r);
    ar=pi*r*r;
	printf("Area of circle with radius %d is %f \n", r, ar);
	getch();
}