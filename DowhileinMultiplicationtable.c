#include<stdio.h>

int main(void)
{
    int num,no1=1;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Table of number %d is :\n",num);
    do
    {
        int no2=0;
        do
        {
            printf("%d x %d = %d\n",no1,no2,no1*no2);
            no2++;
        } while (no2<101);
        printf("\n");
        no1++;
    }while(no1<101);    
        
    
}