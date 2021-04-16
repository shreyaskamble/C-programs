#include<stdio.h>>

void main()
{
    char st[30],ct[30];
    int k;
    printf("Enter string 1");
    gets(st);
    printf("Enter string 2");
    gets(ct);
     k= strcmp(st,ct);
     printf("\nk=%d",k);
     if(k=0)
     printf("\nentered string is same");
     else
     printf("\nentered strings are different");
}