#include<stdio.h>
#include<conio.h>
int main()
{
    int no1;
    printf("Enter any month no");
    scanf("%d",&no1);
    switch(no1)
    {
        case 1:
        {
            printf("January");
        }
        break;
        case 2:
        {
            printf("February");
        }
        break;
        case 3:
        {
            printf("March");
        }
        break;
        case 4:
        {
            printf("April");
        }
        break;
        case 5:
        {
            printf("May");
        }
        break;
        case 6:
        {
            printf("June");
        }
        break;
        case 7:
        {
            printf("July");
        }
        break;
        case 8:
        {
            printf("August");
        }
        break;
        case 9:
        {
            printf("September");
        }
        break;
        case 10:
        {
            printf("October");
        }
        break;
        default:
        {
            printf("This is invalid no");
        }
        
        
    }
}