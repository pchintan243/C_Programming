#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    do
    {
        printf("guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("lower number please !\n");
        }
        else if (guess < number)
        {
            printf("higher number please !\n");
        }
        else
        {
            printf("you guessed it in %d attemps\n", nguesses);
        }
        nguesses++;
    } while (guess != number);
    return 0;
}

/*   output :
guess the number between 1 to 100
89
lower number please !
guess the number between 1 to 100
60
lower number please !
guess the number between 1 to 100
30
lower number please !
guess the number between 1 to 100
10
higher number please !
guess the number between 1 to 100
25
higher number please !
guess the number between 1 to 100
28
you guessed it in 6 attemps        */