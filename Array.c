#include <stdio.h>
#include <conio.h>

void display (int age1, int age2)
{
      printf("%d\n", age1);
      printf("%d\n", age2);
}
void main()
{
    int ageArray[]={2, 8, 4, 12};
    //passing second and third elements to display()
    display (ageArray[1], ageArray[2]);
}