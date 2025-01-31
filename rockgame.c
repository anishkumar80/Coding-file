#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int getComputerChoice() {
    return rand() % 3; 
}


void determineWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 0 && computerChoice == 2) || 
               (userChoice == 1 && computerChoice == 0) || 
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }
}

int main() {
    int userChoice, computerChoice;
    
    
    srand(time(0));

    printf("Welcome to Rock, Paper, Scissors!\n");
    scanf("%d", &userChoice);

    
    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid choice! Please choose a number between 0 and 2.\n");
        return 1;
    }

    
    computerChoice = getComputerChoice();

    
    const char* choices[] = {"Rock", "Paper", "Scissors"};
    printf("You chose: %s\n", choices[userChoice]);
    printf("Computer chose: %s\n", choices[computerChoice]);

    
    determineWinner(userChoice, computerChoice);

    return 0;
}

