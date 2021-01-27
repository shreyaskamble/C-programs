#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d;
    printf("\nEnter the first byte");
    scanf("%d",&a);

    printf("\nEnter the second byte");
    scanf("%d",&b);

    printf("\nEnter third byte");
    scanf("%d",&c);

    printf("\nEnter the fourth byte");
    scanf("%d",&d);

    printf("The Ip address is%d.%d.%d.%d",a,b,c,d);
      if (a<=127)
      {
          printf("\nClass A");
      }
        else if(a>127&&a<=191)
        {
            printf("\nClass B");
        }
           else if(a>191&&a<=223)
           {
               printf("\nClass C");
           }
              else if(a>223&&a<=239)
              {
                  printf("\nClass D");
              }
                else
                {
                    printf("\nClass E");
                }
       return(0);
}                
                
        