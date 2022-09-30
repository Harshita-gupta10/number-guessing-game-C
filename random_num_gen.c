//we will write a program that generates a random number and asks the player to guess it.
//if the player's guess is higher than the actual number, the program displays "lower number please".
//similarly if the user's guess is lower than the actual number, the program prints "higher number please".
//when user guesses the correct number, the program displays the number of gusses the user took, before
//guessing the coorect number

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, guess, nguesses = 0;
    srand(time(0));
    num = rand() % 100 + 1; //generates random numbers from 1 to 100
    //printf("The number is %d\n", num);
    //keep running the kloop until the number is guessed
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);

        if (guess > num)
        {
            printf("Lower number please\n");
        }
        else if (guess < num)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("You guessed the right answer in %d attempts\n", nguesses);
        }
        nguesses++;

    } while (guess != num);

    return 0;
}