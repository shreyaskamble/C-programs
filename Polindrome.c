#include<stdio.h>
#include<conio.h>

int main()
{
    int num,sd,revnum = 0,remainder;
    printf("Enter a number");
    scanf("%d",&num);
    sd=num;
    while (sd!=0)
    {
        remainder = sd%10;
        revnum = revnum * 10 + remainder;
        sd/=10;
    }
    if (revnum==num)
    {
        printf("%d is polindrome",num);
    }
    else
    {
        printf("%d is not a polindrome",num);
    }
    
    return 0;   
}