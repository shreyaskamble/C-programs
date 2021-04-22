//infinite Loop with goto// simple example for goto

#include<stdio.h>
int main()
{
    int i=1;
    L:
         printf("goto %d\n",i);
         i++;
         goto L;




}