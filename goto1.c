// print numbers from 1 to 10 with out any loop

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