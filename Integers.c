#include<stdio.h>
#include<conio.h>

void main()
{
    int Values[5],i;
    printf("Enter 5 integers:");

    //taking input and storing it in an array
    for (i=0; i<5; i++)
    {
        scanf("%d", &Values[i]);
    }
    printf("Displaying integer:");
    //printing elements of an array
    for (i=0; i<5; i++)
    {
        printf("%d\n", Values[i]);
    }
    
}