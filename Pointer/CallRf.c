/*******************************************************
 Statement - Add numbers using call by reference
 Code By -  Nishan Lamichhane
 Visit my Website - http://nisanlamichhane.com.np
 *******************************************************/

#include <stdio.h>
#include <conio.h>

long add(long *, long *);

void main()
{
    long first, second, sum;
    clrscr();
    
    printf("Input two integers to add\n");
    scanf("%ld%ld", &first, &second);
    
    sum = add(&first, &second);
    
    printf("(%ld) + (%ld) = (%ld)\n", first, second, sum);
    
    getch();
}

long add(long *x, long *y) {
    long sum;
    
    sum = *x + *y;
    
    return sum;
}