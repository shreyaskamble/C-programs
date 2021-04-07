#include<stdio.h>

int main()
{
    int num=0,no1=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Table of number %d is :\n",num);
    while (no1<101)
    {
        int no2=1;
        while (no2<=10)
        {
            printf("%d\t",no1*no2);
            if (no2==10)
                 printf("\n");
              no2++;
        }
        if(no1 % 10 == 0)
             printf("\n");
           no1++;  
        
    }
    
}