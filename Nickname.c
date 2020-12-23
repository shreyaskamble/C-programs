#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
    /* String Declaration */
    char nickname[10];
    printf("Enter your Nick Name ");

    /* I am reading the input string and storing it is nickname
     * Array name alone works as a base address of array so
     * we can use nickname instead of & nickname here
     * /
  scanf("%s", nickname);

  /* Displaying string */
  printf("%s",nickname);
}