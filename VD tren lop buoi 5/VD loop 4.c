#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess,randomNumber;
    srand(time(0));
    randomNumber = rand()%100+1;
    do
    {
        printf("Guess the number (1-100): ");
        scanf("%d",&guess);
        if(guess>randomNumber)
            printf("too high\n");
        else if (guess<randomNumber)
            printf("too low\n");
        else
            printf("congratulations!\n");
    } while (guess!=randomNumber);
    return 0;
}