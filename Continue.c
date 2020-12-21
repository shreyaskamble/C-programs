#include<stdio.h>

 void main()
 {
      int a=0;
      while (a<10)
      {
          a++;
          if(a==5)
          continue;

          printf("\nStatement%d.",a);
      }
      printf("\nEnd of Program.");
 }