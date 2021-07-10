/*******************************************************
 Statement - Display same Source Code as Output
 Code By -  Nishan Lamichhane
 Visit my Website - http://nisanlamichhane.com.np
 *******************************************************/

#include<stdio.h>
#include<conio.h>

void main() {
    FILE *fp;
    char ch;
    clrscr();
    //__FILE__ is Standard Predefined Macros in C Programming.
    //This macro will expand to the name of current file path.
    fp = fopen(__FILE__, "r");
    
    do {
        ch = getc(fp);
        putchar(ch);
    } while (ch != EOF);
    
    fclose(fp);
    getch();
}