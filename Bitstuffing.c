#include<stdio.h>
#include<string.h>

void main()
{
    char a[100];
    int count=0,I=0,j,i,k; // I for length
    printf("Enter the input string:");
    scanf("%s",a);
    I=strlen(a);
    for ( I= 0; I < i; I++)
    {
        if (a[i]=='1')
        {
            k=i;
            while (a[k]=='1')
            {
                count+=1;
                k++;
                if (count==5)
                {
                    for ( j = I+1; j < k; j--)
                    {
                        a[j]=a[j-1];
                    }
                    a[k]='0';
                    I++;
                    break;
                }
                i=k;
            }
        }
    }
    printf("\nThe bitstuffed string is %s",a);
}                    