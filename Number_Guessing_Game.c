// Number guessing game.

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int guess;
int num_min = 0;
int num_max = 50;
int sum = 1;

void num_guessing_game(int guess, int num_min, int num_max, int sum);

int main(){
    srand(time(NULL));
    printf("-----Number guessing game-----\n");
    num_guessing_game(guess, num_min, num_max, sum);

    return 0;
}

void num_guessing_game(int guess, int num_min, int num_max, int sum){
        srand(time(NULL));
        int rand_num = (rand() % (num_max - num_min +1)) + num_min;

        while(sum == 1){
            printf("Guess a number between 0 to 50: ");
            scanf("%d", &guess);

            if(guess <= 50 && guess >= 0){
                if(guess == rand_num){
                    printf("You guessed right, you won. The correct guess is %d\n", guess);
                    printf("Wanna play again (1 or 0):");
                    scanf("%d", &sum);

                    if(sum == 1){
                        num_guessing_game(guess, num_min, num_max, sum);
                    }
                    else if(sum == 0){
                        printf("Thanks for playing\n");
                        break;
                    }
                }
                else if (guess < rand_num){
                    printf("Higher..\n");
                    continue;
                }
                else{
                    printf("Lower..\n");
                    continue;
                }
            }
            else{
                printf("Invalid answer, guess between 0 to 50\n");
            }
        }
    }
