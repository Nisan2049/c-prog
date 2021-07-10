/*******************************************
Statement - Addition of two number
Code By -  Nishan Lamichhane
Visit my Website - http://nisanlamichhane.com.np
********************************************/

#include <stdio.h>
#include <conio.h>

void main()
{
	int a, b, c;
	clrscr();
	printf("Enter two numbers to add\n");
	scanf("%d%d",&a,&b);
	c = a + b;
	printf("Sum of entered numbers = %d\n",c);
	getch();
}