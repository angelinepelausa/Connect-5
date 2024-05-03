#include <stdio.h>
#include <ctype.h>

void block(int col, char table[9][9], char player) {
    for (int i = 8; i >= 0; i--) {
        if (table[i][col] == ' ') {
            table[i][col] = player;
            break;
        }
    }
}

int main() {
    int rows = 9;
    int cols = 9;
    char c;
    char currentPlayer = 'X'; // p1 starts

    char table[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            table[i][j] = ' ';
        }
    }
    while (1) {

        for (int j = 1; j <= cols; j++) {
            table[0][j] = 'A' + j - 1;
        }

        for (int i = 1; i < rows; i++) {
            table[i][0] = '0' + i;
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                printf("%c| ", table[i][j]);
            }
            printf("\n");
        }
        if (currentPlayer == 'X')
            printf("Player 1 Enter column: ");
        else
            printf("Player 2 Enter column: ");

        scanf(" %c", &c);
        switch (tolower(c)) {
            case 'a':
                block(1, table, currentPlayer);
                break;
            case 'b':
                block(2, table, currentPlayer);
                break;
            case 'c':
                block(3, table, currentPlayer);
                break;
            case 'd':
                block(4, table, currentPlayer);
                break;
            case 'e':
                block(5, table, currentPlayer);
                break;
            case 'f':
                block(6, table, currentPlayer);
                break;
            case 'g':
                block(7, table, currentPlayer);
                break;
            case 'h':
                block(8, table, currentPlayer);
                break;
            default:
                printf("Invalid Input\n");
                continue; // prompt for valid input
        }
        // switch players after each move
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
    return 0;
}
