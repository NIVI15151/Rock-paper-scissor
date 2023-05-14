#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main() 
{
	char end[4];
    int player, computer;
    int player_score = 0, computer_score = 0;
    printf("Welcome to the rock-paper-scissors game!\n");

    do 
	{
    	
        printf("Enter your move \n1. rock\n2. paper\n3. scissors\n");
        scanf("%d", &player);
        if (player < 1 || player > 3) 
		{
            printf("Invalid move. Try again.\n");
            continue;
        }
        computer = rand() % 3 + 1;
        if (player == computer) 
		{
            printf("It's a tie!\nComputer took move %d\n",computer);
        } 
		else if ((player == 1 && computer == 3)||(player == 2 && computer == 1)||(player == 3 && computer == 2)) 
		{
            printf("You win!\nComputer took move %d\n",computer);
            player_score++;
        } 
		else 
		{
            printf("Computer wins!\nComputer took move %d\n",computer);
            computer_score++;
        }
        //printf("Your score: %d, Computer score: %d\n", player_score, computer_score);
        printf("\nFor exiting the game type:- STOP \n                else type :- Y\n");
        fflush(stdin); 
		gets(end);
    } while (strcmp(end,"STOP"));

    if (player_score > computer_score) 
	{
        printf("Congratulations, you win the game!\n");
    }
	else if(player_score = computer_score)
	{
		printf("It is a tie!\n");
	} 
	else
	{
        printf("Sorry, you lost the game. Better luck next time!\n");
    }
    return 0;
}
