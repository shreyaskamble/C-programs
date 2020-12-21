#include <stdio.h>
#include <conio.h>

//function prototype, also called function declaration
void swap (int a, int b);

int main(void)
{
    int m = 22, n = 44;
    // calling swap function by value
    printf(" Values before swap\n m =%d and n=%d", m, n);
    swap(m, n);
   
}

void swap(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    printf("\n values after swap\n m=%d and n=%d", a, b);
}