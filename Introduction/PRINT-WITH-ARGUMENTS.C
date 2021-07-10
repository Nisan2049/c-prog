/*******************************************
Statement - Different Printing ways
Code By -  Nishan Lamichhane
Visit my Website - http://nisanlamichhane.com.np
********************************************/

#include <stdio.h>
#include <conio.h>

void main()
{
	clrscr();
    int a=5, b=6; c=7;
    float d=2.5, e = 44.6, f=12.23;
    printf("%d %d %d", a,b,c);
    printf("\n-----------------------------\n");
    printf("%d, %d, %d", a,b,c);
    printf("\n-----------------------------\n");
    printf("a=%d b=%d c=%d", a,b,c);
    printf("\n-----------------------------\n");
    printf("a=%d, b=%d, c=%d", a,b,c);
    printf("\n-----------------------------\n");
    printf("a=%d \n b=%d \n c=%d", a,b,c);
    printf("\n-----------------------------\n");
    printf("a=%d \t e=%f \t c=%d", a,e,c);
    printf("\n-----------------------------\n");
    printf("d=%f b=%d f=%f", d,b,f);
    printf("\n-----------------------------\n");
    printf("%f %f %f", d,e,f);
    printf("\n-----------------------------\n");
    printf("%d, %d, %d", d,e,f);
    printf("\n-----------------------------\n");
    getch();
}