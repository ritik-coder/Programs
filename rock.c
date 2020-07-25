#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); //it takes seed as an input & is defind inside stlib.h
    return rand() % n;
}

int greater(char c1, char c2)
{
    //for rock, paper, scissor return 1 if c1>c2 otherwise if c1==c2 it will return -1
    if (c1 == c2)
    {
        return -1;
    }
    else if ((c1 == 'R') && (c2 == 'S'))
    {
        return 1;
    }
    else if ((c2 == 'R') && (c1 == 'S'))
    {
        return 0;
    }

    else if ((c1 == 'P') && (c2 == 'R'))
    {
        return 1;
    }
        else if ((c1 == 'P') && (c2 == 'R'))

    {
        return 0;
    }

    else if ((c1 == 'S') && (c2 == 'P'))
    {
        return 1;
    }
    else if ((c2 == 'S') && (c1 == 'P'))
    {
        return 0;
    }
}

int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'R', 'P', 'S'};
    printf("Welcome to the Rock, Paper, Scissor Game\n");
    for (int i = 0; i < 3; i++)
    {
        //Take player 1 input
        printf("PLAYER 1's Turn:\n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissor\n");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("You Chose %c\n", playerChar);
        //generate computer input

        printf("COMPUTER's Turn:\n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissor\n");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("CPU Chose %c\n", compChar);

        //compare the scores
        if (greater(compChar, playerChar) == 1)
        {
            compScore += 1;
            printf("CPU GOT IT!\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("IT'S A DRAW\n");
        }
        else
        {
            playerScore += 1;
            printf("YOU GOT IT!\n");
        }
        printf("YOU: %d\nCPU: %d\n\n", playerScore, compScore);
    }

    if (playerScore > compScore)
    {
        printf("YOU ARE THE WINNER\n");
    }
    else if (playerScore < compScore)
    {
        printf("CPU WON\n");
    }
    else
    {
        printf("IT'S A DRAW\n");
    }

    return 0;
}