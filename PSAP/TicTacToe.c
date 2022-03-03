#include <stdio.h>

char board[10] = {'0','1','2','3','4','5','6','7','8','9'};
char board2[10] = {'0','1','2','3','4','5','6','7','8','9'};

int print_board(){
    for (int i=1; i<=9; i+=3){
        //printf("_______________\n");
        printf("-------------------\n");
        printf("|     |     |     |\n");
        printf("|  %c  |  %c  |  %c  |\n", board2[i], board2[i+1], board2[i+2]);
        printf("|     |     |     |\n");
        //printf("---------------\n");
    }
    printf("-------------------\n");
    //printf("_______________\n");
    return 0;
}
int check_win(){
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
        return  -1;
}

int get_coord(){
    int c;
    printf("Enter posn - ");
    scanf("%d",&c);
    return c;
}
int main(){

    printf("\nKEYS for the game:-\n");
    print_board();

    printf("PLAYER A -> X\n");
    printf("PLAYER B -> O\n");

    for(int i = 1; i <= 10; i++){
        board2[i] = '-';
    }

    int cnt = 1;
    while(cnt <= 9){

        char marker = (cnt % 2 == 1)? 'X':'O';
        char player = (cnt % 2 == 1)? 'A':'B';

        printf("Player %c\n", player);
        int c = get_coord();
        if (c <= 1 && c >=9){
            printf("Re-enter a valid location\n");
            c = get_coord();
        }
        board[c] = marker;
        board2[c] = marker;
        int result = check_win();
        if(result == 1) {
            print_board();
            printf("\n-------------------\n");
            printf("  PLAYER %c WINS!\n", player);
            printf("-------------------\n");
            return 0;
        }
        else if(result == 0){
            printf("\n-------------------\n");
            printf("    There is a TIE! \n");
            printf("-------------------\n");
            return 0;
        }
        else {
            print_board();
            cnt++;
        }    
    }
    printf("\n-------------------\n");
    printf("   There is a TIE! \n");
    printf("-------------------\n");
    return 0;
}