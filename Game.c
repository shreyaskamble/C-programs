//Project : Number game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
     int number , guess , nguess=1;
     srand(time(0));
     number = rand()%100 + 1;
     //printf("The number is %d", number);
     do{
         printf("\t\t\tGuess the number brtween 1 to 100\n\t\t\t");
         scanf("%d", &guess);
         if (guess>number)
         {
             printf("\t\t\tLower number please\n");
         }
        else if (guess<number)
        {
            printf("\t\t\tHigher number please\n");
        }
        else
        {
            printf("\t\t\tYou guessed it in %d attempts\n",nguess);
        }
        nguess++;
    }
     while(guess!=number);
     return 0;
}