#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random()
{
    srand(time(NULL));
    return rand() % 3;
}
void game(int a, int b)
{
    if (a == 0 && b == 0)
        printf(" Match Drawn.....");
    else if (a == 0 && b == 1)
        printf("Hurray you wins....");
    else if (a == 0 && b == 2)
        printf("You Lost....");
    else if (a == 1 && b == 0)
        printf("You Lost....");
    else if (a == 1 && b == 1)
        printf("Match Drawn.....");
    else if (a == 1 && b == 2)
        printf("Hurray you wins....");
    else if (a == 2 && b == 0)
        printf("Hurray you wins....");
    else if (a == 2 && b == 1)
        printf("You Lost....");
    else if (a == 2 && b == 2)
        printf("Match Drawn.....");
}
int main()
{
    int a;
    char name[100];
    printf("..................WELCOME TO THE GAME.......................");
    printf("\nEnter your name: ");
    scanf("%s", &name);
    printf("Here are your choices :\n 0- ROCK \n 1- SCISSOR \n 2- PAPER\n If you want to exit from the game enter 5.\n");
first:
    printf("\nEnter your choice : ");
    scanf("%d", &a);

    if (a == 0)
        printf("You have chosen - ROCK\n");
    else if (a == 1)
        printf("You have chosen - SCISSOR\n");
    else if (a == 2)
        printf("You have chosen - PAPER\n");
    else if (a == 5)
        goto end;
    else{
        printf("wrong choice....");
        goto first;
    }
        

    if (random() == 0)
    {
        printf(" Computer - ROCK\n");
        game(a, random());
    }
    else if (random() == 1)
    {
        printf(" Computer - SCISSOR\n");
        game(a, random());
    }
    else if (random() == 2)
    {
        printf(" Computer - PAPER\n");
        game(a, random());
    }
    goto first;
end:
    printf("\nThank you for playing the game.........");
    return 0;
}