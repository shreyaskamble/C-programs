#include <stdio.h>
/* global variable declaration */
int g;
void main()
{
     /* local variable declaration */
     int a,b;

     /* actual initialization */
     a=10;
     b=20;
     g=a + b;

     printf("volue of a=%d,b=%d,g=%d\n",a,b,g);
}