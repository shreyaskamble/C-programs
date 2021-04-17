#include<stdio.h>

void main()
{
    int m1,m2,d=0,y;
    printf("Enter first month");
    scanf("%d",&m1);
       printf("Enter last month");
    scanf("%d",&m2);
        printf("Enter year");
            scanf("%d",&y);
    while (m1<=m2)
    {
        if(m1==1||m2==3||m1==5||m1==7||m1==8||m1==10||m1==12)
        {
            d=d+31;
        }
        else if(m1==4||m1==6||m1==9||m1==11)
        {
            d=d+30;
        }
        else if(y%4==0&&m1==2)
        {
            d=d+29;
        }
        else
        {
            d=d+28;
        }
        m1=m1+1;        
    }

     printf("Number of days%d",d);   
    

}