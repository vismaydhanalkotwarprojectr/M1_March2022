#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

char a[10] = {'0','1','2','3','4','5','6','7','8','9'};
int checkWin();
void drawBoard();

int main()
{
    system("COLOR 80");
    int player = 1, i, choice;
    char mark; //X,0
    do {
        drawBoard();   
        player = (player % 2) ? 1 : 2;
        printf("Player %d, enter the choice please:  ", player);
        scanf("%d", &choice);
        mark = (player == 1) ? 'X' : 'O';
        if(choice == 1 && a[1] == '1')
            a[1] = mark;
        else if(choice == 2 && a[2] == '2')
            a[2] = mark;
            else if(choice == 3 && a[3] == '3')
            a[3] = mark;
            else if(choice == 4 && a[4] == '4')
            a[4] = mark;
            else if(choice == 5 && a[5] == '5')
            a[5] = mark;
            else if(choice == 6 && a[6] == '6')
            a[6] = mark;
            else if(choice == 7 && a[7] == '7')
            a[7] = mark;
            else if(choice == 8 && a[8] == '8')
            a[8] = mark;
            else if(choice == 9 && a[9] == '9')
            a[9] = mark;

            else {
                printf("Invalid option !\n, Please try again");
                player--;
                getch();
            }
            i = checkWin();
            player++;            
        
    }
    while(i == -1);

    drawBoard();
    if(i==1) {
        printf("==>Congratulations Player %d, You win",--player);
    }
    else {
        printf("==>Game is draw");
    }
    getch();
    return 0;

}
int checkWin() 
{
    if (a[1] == a[2] && a[2] == a[3])
        return 1;
    else if(a[4] == a[5] && a[5] == a[6])
        return 1;
    else if(a[7] == a[8] && a[8] == a[9])
        return 1;
    else if(a[1] == a[5] && a[5] == a[9])
        return 1;
    else if(a[3] == a[5] && a[5] == a[7])
        return 1;
    else if(a[1] == a[4] && a[4] == a[7])
        return 1;
    else if(a[2] == a[5] && a[5] == a[8])
        return 1;
    else if(a[3] == a[6] && a[6] == a[9])
        return 1;
    else if(a[1] != '1' && a[2] != '2' && a[3] != '3' && a[4] != '4' && a[5] != '5' && a[6] != '6' && a[7] != '7' && a[8] != '8' && a[9] != '9')
        return 0;
    else 
        return -1;

}

void drawBoard()
{
    system("cls");
    printf("\n\n\t Tic Tac Toe \n\n");
    printf("Player1 (X) - Player2 (0) \n\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c   \n", a[1],a[2],a[3]);
    printf("_____|_____|_____\n");
    printf("     |     |    \n");
    printf("  %c  |  %c  |  %c   \n", a[4],a[5],a[6]);
    printf("_____|_____|_____\n");
    printf("     |     |    \n");
    printf("  %c  |  %C  |  %C   \n", a[7], a[8], a[9]);
    printf("     |     |    \n");

}
