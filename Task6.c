
#include <stdio.h>

int main() {
    char board[3][3];
    int winner = 0;

    printf("Enter the Tic-Tac-Toe board (X, O, or -):\n");


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf(" %c", &board[i][j]);
        }
    }


    printf("\n--- Tic-Tac-Toe Board ---\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < 3; i++) {
        if (board[i][0] != '-' &&
            board[i][0] == board[i][1] &&
            board[i][1] == board[i][2]) {
            printf("Winner: %c\n", board[i][0]);
            winner = 1;
            break;
        }
    }


    if (winner == 0) {
        for (int j = 0; j < 3; j++) {
            if (board[0][j] != '-' &&
                board[0][j] == board[1][j] &&
                board[1][j] == board[2][j]) {
                printf("Winner: %c\n", board[0][j]);
                winner = 1;
                break;
            }
        }
    }


    if (winner == 0) {
        if (board[0][0] != '-' &&
            board[0][0] == board[1][1] &&
            board[1][1] == board[2][2]) {
            printf("Winner: %c\n", board[0][0]);
            winner = 1;
        }
        else if (board[0][2] != '-' &&
                 board[0][2] == board[1][1] &&
                 board[1][1] == board[2][0]) {
            printf("Winner: %c\n", board[0][2]);
            winner = 1;
        }
    }


    if (winner == 0) {
        printf("The game is a draw.\n");
    }

    return 0;
}
