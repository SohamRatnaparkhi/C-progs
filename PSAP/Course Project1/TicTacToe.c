#include <stdio.h>

int print_board();
int check_win();
int get_coord();
int color_red();
int hori_line();
int vert_line();
int color_yellow();
int color_green();
int color_normal();
int color_cyan();

char board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
char board2[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int color_cntr = 1;

int main()
{

    color_normal();
    printf("\nKEYS for the game:-\n");
    print_board();

    color_red();
    printf("\nPLAYER A -> X\n");
    color_green();
    printf("\nPLAYER B -> O\n");
    color_normal();

    for (int i = 1; i <= 10; i++)
    {
        board2[i] = '-';
    }

    int cnt = 1;
    while (cnt <= 9)
    {

        char marker = (cnt % 2 == 1) ? 'X' : 'O';
        char player = (cnt % 2 == 1) ? 'A' : 'B';

        printf("\nPlayer %c -> %c\n", player, marker);
        int c = 0;
        while (c < 1 || c > 9)
        {
            c = get_coord();
            if (c < 1 || c > 9)
            {
                color_green();
                printf("Re-enter a valid location\n");
                color_normal();
                // c = get_coord();
            }
        }
        while (1)
        {
            if (board[c] == 'X' || board[c] == 'O')
            {
                color_green();
                printf("You choose a position that is already occupied by some marker.\n");
                printf("Re-enter a valid location\n");
                color_normal();
                c = get_coord();
            }
            else
                break;
        }
        while (c < 1 || c > 9)
        {
            c = get_coord();
            if (c < 1 || c > 9)
            {
                color_green();
                printf("Re-enter a valid location\n");
                color_normal();
                // c = get_coord();
            }
        }
        board[c] = marker;
        board2[c] = marker;
        int result = check_win();
        if (result == 1)
        {
            print_board();
            printf("\n-------------------\n");
            color_yellow();
            printf("  PLAYER %c WINS!\n", player);
            color_normal();
            printf("-------------------\n");
            //
            return 0;
        }
        else if (result == 0)
        {
            printf("\n-------------------\n");
            color_yellow();
            printf("    There is a TIE! \n");
            color_normal();
            printf("-------------------\n");
            return 0;
        }
        else
        {
            cnt++;
            color_cntr++;
            print_board();
            color_normal();
        }
    }
    printf("\n-------------------\n");
    printf("   There is a TIE! \n");
    printf("-------------------\n");
    return 0;
}

int print_board()
{
    color_normal();
    for (int i = 1; i <= 9; i += 3)
    {
        // printf("_______________\n");

        printf("-------------------\n");
        printf("|     |     |     |\n");
        // printf("|  %c  |  %c  |  %c  |\n", board2[i], board2[i+1], board2[i+2]);
        for (int j = 0; j < 3; j++)
        {
            if (color_cntr == 1)
            {
                color_normal();
                printf("|  ");
                printf("%c  ", board2[i + j]);
            }

            else
            {
                if (board[i + j] == 'X')
                {
                    printf("|  ");
                    color_red();
                    printf("%c  ", board2[i + j]);
                    color_normal();
                }
                else if (board[i + j] == 'O')
                {
                    printf("|  ");
                    color_cyan();
                    printf("%c  ", board2[i + j]);
                    color_normal();
                }
                else
                {
                    color_normal();
                    printf("|  ");
                    printf("%c  ", board2[i + j]);
                }
            }
        }
        printf("|\n");

        printf("|     |     |     |\n");
    }
    printf("-------------------\n");

    return 0;
}

int check_win()
{
    if (board[1] == board[2] && board[2] == board[3])
        return 1;

    else if (board[4] == board[5] && board[5] == board[6])
        return 1;

    else if (board[7] == board[8] && board[8] == board[9])
        return 1;

    else if (board[1] == board[4] && board[4] == board[7])
        return 1;

    else if (board[2] == board[5] && board[5] == board[8])
        return 1;

    else if (board[3] == board[6] && board[6] == board[9])
        return 1;

    else if (board[1] == board[5] && board[5] == board[9])
        return 1;

    else if (board[3] == board[5] && board[5] == board[7])
        return 1;

    else if (board[1] != '1' && board[2] != '2' && board[3] != '3' && board[4] != '4' && board[5] != '5' && board[6] != '6' && board[7] != '7' && board[8] != '8' && board[9] != '9')
        return 0;
    else
        return -1;
}

int get_coord()
{
    int c;
    color_yellow();
    printf("Enter posn - ");
    color_normal();
    scanf("%d", &c);
    return c;
}

int replay_game()
{
    color_yellow();
    int query;
    printf("Do you want to replay the game? \nEnter 1 for yes & 0 for no - ");
    color_normal();
    scanf("%d", &query);
    if (query == 1)
        return 1;
    else
        return 0;
}

int color_red()
{
    printf("\033[1;31m");
    return 0;
}

int color_green()
{
    printf("\033[0;32m");
    return 0;
}

int color_yellow()
{
    printf("\033[1;33m");
    return 0;
}

int color_cyan()
{
    printf("\33[0;36m");
    return 0;
}

int color_normal()
{
    printf("\033[0m");
    return 0;
}
