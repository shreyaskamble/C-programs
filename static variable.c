#include <stdio.h>
#include <conio.h>

void display();

void main ()
{
  display();
  display();     
}

void display()
{
    static int c = 1;
    c += 5;
    printf("%d",c);
}
