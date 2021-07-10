/*******************************************
Statement - Arithmetic Operation of two number
Code By -  Nishan Lamichhane
Visit my Website - http://nisanlamichhane.com.np
********************************************/

#include <stdio.h>
#include <conio.h>

void main()
{
	int a, b, c, d ,e ,f, g;
    float h, i;
	clrscr();
	printf("Enter two numbers to add\n");
	scanf("%d%d",&a,&b);
	c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    g = a % b;

    printf("Sum of entered numbers = %d\n",c);
    printf("Difference of entered numbers = %d\n",d);
    printf("Product of entered numbers = %d\n",e);
    printf("Division of entered numbers = %d\n",f);
    printf(" Reminder is = %d\n",g);
    
    h = a / b;
    i = (float)a / b;
	
    printf("Division of entered when h is float = %f\n",h);
    printf("Division of entered numbers after type casting = %f\n",i);

	getch();
}