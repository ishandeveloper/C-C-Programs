/*

A Simple Program For Playing Tic Tac Toe In C

Made with ♥ by ishandeveloper 

*/
#include <stdio.h>
#include <conio.h>

char block[10] = { 'x', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int wonornot()
{
    if (block[1] == block[2] && block[2] == block[3])
        return 1;

    else if (block[4] == block[5] && block[5] == block[6])
        return 1;

    else if (block[7] == block[8] && block[8] == block[9])
        return 1;

    else if (block[1] == block[4] && block[4] == block[7])
        return 1;

    else if (block[2] == block[5] && block[5] == block[8])
        return 1;

    else if (block[3] == block[6] && block[6] == block[9])
        return 1;

    else if (block[1] == block[5] && block[5] == block[9])
        return 1;

    else if (block[3] == block[5] && block[5] == block[7])
        return 1;

    else if (block[1] != '1' && block[2] != '2' && block[3] != '3' &&
        block[4] != '4' && block[5] != '5' && block[6] != '6' && block[7]
        != '7' && block[8] != '8' && block[9] != '9')

        return 0;
    else
        return  - 1;
}
void display()
{
    /*CLRSCR FUNCTION AND SYSTEM("CLS") WEREN'T WORKING SO I JUST ADDED A BUNCH OF BREAKLINES*/
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("(X) For Player 1  -  (O) For Player 2\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", block[1], block[2], block[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", block[4], block[5], block[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", block[7], block[8], block[9]);
    printf("     |     |     \n\n");
}

int main()
{
    int plr=1,boola=0,nextmove;
    char point;
    for(;;)
    {
            display();

            plr=(plr%2)?1:2;

            printf("Player %d's Turn \n\n Enter Your Choice :\t",plr);
            scanf("%d",&nextmove);

            if(plr==1)
                point='X';
            else
                point='O';

            if (nextmove == 1 && block[1] == '1')
                block[1] = point;

            else if (nextmove == 2 && block[2] == '2')
                block[2] = point;

            else if (nextmove == 3 && block[3] == '3')
                block[3] = point;

            else if (nextmove == 4 && block[4] == '4')
                block[4] = point;

            else if (nextmove == 5 && block[5] == '5')
                block[5] = point;

            else if (nextmove == 6 && block[6] == '6')
                block[6] = point;

            else if (nextmove == 7 && block[7] == '7')
                block[7] = point;

            else if (nextmove == 8 && block[8] == '8')
                block[8] = point;

            else if (nextmove == 9 && block[9] == '9')
                block[9] = point;
            else
            {
                printf("Come on, You can't make that move.");
                plr--;
            }
            boola=wonornot();
            plr++;
     if(boola!=-1)
        break;
    }
    display();

    if(boola==1)
            printf("Player %d Jeet Gya! ",--plr);
    else
            printf("This match has been drawn");
    return 0;
}
