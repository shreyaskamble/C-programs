#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char s[10][10];

    int A[40],i,n;

    printf("Enter The No. of Frames You Want To Send :\n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("\n Enter The Frame No.%d\n",i);
        scanf("%s",&s[i]);
    }
     for ( i = 0; i < n; i++)
     {
         A[i]=strlen(s[i]);
     }
     printf("\n Generated code is:\n");
     for ( i = 0; i < n; i++)
     {
         printf("%d%s\n",A[i],s[i]);
     }
}