#include <io.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

// Global values
int max;

// Player prompt function
void prompt (void) {
    printf("Press 1 to play a game\n");
    printf("Press 2 to change the max number\n");
    printf("Press 3 to quit\n");
}

// Number guessing game logic function
void play (void) {
    int answer, num;
    // initiate random number generator
    time_t t;
    srand((unsigned) time(&t));

    answer = (rand() % max);

    printf("Enter a number between 1 - %d: ", max);
    scanf("%ld", &num);

    if (num != 5) {
        while (num != answer) {
            if (num < answer) {
                printf("\nnumber is too low");
            }
            else if (num > answer) {
                printf("\nnumber is too high");
            }
            printf("\nTry again: ");
            scanf("%ld", &num);
        }
    }
    printf("\nYou are correct!\n");
}

// Change max number function
void change (void) {
    printf("The maximum value you can set is %d\n", INT_MAX);
    scanf("%ld", &max);

    while ((max > INT_MAX) || (max < 0)){
        if (max > INT_MAX){
            printf("Value exceeds maximum.");
            scanf("%ld", &max);
        }
        else if (max < 0) {
            printf("Value cannot be negative.");
            scanf("%ld", &max);

        }
    }   
}

void main (void) {
    int userChoice;
    userChoice = 0;
    max = 10;

    while (userChoice != 3) {
    
            prompt();
            scanf("%ld", &userChoice);
            
            switch (userChoice) {
                case 1: 
                play();
                break;
                case 2: 
                change();
                break;
            }
    }

    printf("Thank you for playing!");
}