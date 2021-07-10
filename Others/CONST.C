/**********************************************************
 Statement - Modify the constant variable in c
 Code By -  Nishan Lamichhane
 Visit my Website - http://nisanlamichhane.com.np
 **********************************************************/
#include<stdio.h>
#include<conio.h>

void main()
{
    const int i=10;
    int *ptr=&i;
    clrscr();
    *ptr=(int *)20;
    printf("%d",i);
    getch();
}