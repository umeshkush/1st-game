#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguesses;
   number=rand()%100+1;//randomly generate a number between 1 and 100
   do
   {
       printf("Guess the number between 1 to 100");
       scanf("%d",&guess);
       if(guess>number)
       {
        printf("lower number please!");
       }
       else if(guess<number)
       {
        printf("Higher number please!");
       }
       else
       {
           printf("you guessed it %d attempt!\n",nguesses);
       }
       nguesses++;
   }
       while(guess!=number);

   return 0;

}

