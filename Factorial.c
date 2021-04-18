#include<stdio.h>
void main()
{
    int a,f=1;
    printf("Enter number");
    scanf("%d",&a);
    while (a>=1)
    {
        f=f*a;

        a=a-1;
    }
    
    printf("\nfactorial is %d",f);
}