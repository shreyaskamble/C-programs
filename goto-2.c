//simple example for goto

#include<stdio.h>

int main()
{
    int i=1;
    L:
        if(i<=5)
        {
            printf("code under label\n");
            //i++;
            //goto L;
        }
        goto L;

        printf("control reaches here\n");
 return 0;       
}