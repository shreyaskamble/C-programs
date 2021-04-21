#include<stdio.h>
int main()
{
    int i=0;

    L:
         if(i<=10)
         {
             printf("%d\t",++i);
             goto L;
         }

                
}