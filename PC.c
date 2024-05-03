#include <stdio.h>

int main() {
    int rows = 9;
    int cols = 9;
    
    char table[rows][cols];
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            table[i][j] = ' ';
        }
    }
    
    for(int j = 1; j <= cols; j++) {
        table[0][j] = 'A' + j-1;
    }
    
    for(int i = 1; i < rows; i++) {
        table[i][0] = '0' + i;
    }
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%c| ", table[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
