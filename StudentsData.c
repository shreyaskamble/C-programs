#include<stdio.h>
#include<conio.h>
struct students
{
  char *name[10];
  int id[10];
  int age[10];
}

main()
{
    struct students data;
    data.name[0]="Shreyas";
    data.id[1]=12345;
    data.age[2]=20;

    printf("%s\n",data.name[0]);
    printf("%d\n",data.id[1]);
    printf("%d\n",data.age[2]);

    
}