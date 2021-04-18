#include<stdio.h>
void main()
{
    char x;
    printf("Enter Character=");
    scanf("%c",&x);
    switch (x)
    {
         case 'a':
         case 'e':
         case 'i':
         case 'o':
         case 'u':
         printf("Entered Character is vowels",x);
         default:
         printf("Entered Character is consonant",x);
    }
}