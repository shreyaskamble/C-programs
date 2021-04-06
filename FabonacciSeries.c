#include<stdio.h>

int main()
{
    int num,a=0,b=1,c;
    printf("fabonacci series is:");
    scanf("%d",&num);
    while (num<10)
    {
        num++;
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
    
    return 0;
}
