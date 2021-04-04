#include<stdio.h>

int main(void)
{
    int num,no1=1;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Table of number %d is: \n",num);
     while (no1<101)
     {
         int no2=0;
         while (no2<101)
         {
             printf("%d x %d =%d\n",no1,no2,no1*no2);
             no2++;
         }
         printf("\n");
         no1++;
     }
     
}