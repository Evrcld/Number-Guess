#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    srand(time(0));
    int number = rand() %100;
    int entered;
    int attempts = 0;

    printf("Guess the number: ");

    do
    {   
        scanf("%d", &entered);

        if (entered < number)
        {
            printf("Guess higher\n");
        }

        else if (entered > number)
        {
            printf("Guess lower\n");
        }

        attempts++;
        
    } while (entered != number);

    printf("**************\n");
    printf("CORRECT!\n");
    printf("It took you : %d attempts\n", attempts);
    printf("**************\n");

    return 0;
}
