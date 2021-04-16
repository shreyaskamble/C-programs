#include<stdio.h>

int main()
{
    char st[30];
    int i,d=0,j=0,x,k;
    printf("Enter string");
    gets(st);

    k=strlen(st);
    for ( i = k-1; i >=0; i--)
    {
        if(st[i]>=48&&st[i]<=57)
        x=st[i]-48;
        else
        x=st[i]-55;

        d=d+x*pow(16,j);
        j++;
    }
    printf("Decimal k number is %d",d);

    return 0;
}    