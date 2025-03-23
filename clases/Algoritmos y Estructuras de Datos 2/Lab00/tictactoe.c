#include <stdlib.h>  /* exit() y EXIT_FAILURE */
#include <stdio.h>   /* printf(), scanf()     */
#include <stdbool.h> /* Tipo bool             */

#include <assert.h>  /* assert() */
#define n 3
#define CELL_MAX (n * n - 1)

void print_sep(int length) {
    printf("\t ");
    for (int i=0; i < length;i++) printf("................");
    printf("\n");

}

void print_board(char board[n][n])
{
    int cell = 0;

    print_sep(n);
    for (int row = 0; row < n; ++row) {
        for (int column = 0; column < n; ++column) {
            printf("\t | %d: %c ", cell, board[row][column]);
            ++cell;
        }
        printf("\t | \n");
        print_sep(n);
    }
}

bool string_comparison(char string_1[n], char string_2[n] ){
    int k = 0;
    bool is_equal = 1;
    
    while(k<3 && is_equal == 1){
        if(string_1[k] == string_2[k]){
            k++;
        }else{
            is_equal = 0;
            k++;
        }
    }
    return is_equal;
}

char get_winner(char board[n][n])
{
    char winner = '-';
    
    char row[n];
    char col[n];
    char trace[n];
    char inverse_trace[n];


    for(int i = 0; i<n ; i++){
        for(int j = 0; j<n ; j++){
            
            col[j] = board[j][i];
            row[j] = board[i][j];
            
            if(j == i){
                trace[i] = board[i][j];
            }
            
            if(j == n-1-i){
                inverse_trace[i] = board[i][j];
            }
        }
    }
    
    if(string_comparison(row,"XXX")==1 || string_comparison(col,"XXX")==1 || string_comparison(trace,"XXX")==1 || string_comparison(inverse_trace,"XXX")==1){
        winner = 'X';
    }else if(string_comparison(row,"OOO")==1 || string_comparison(col,"OOO")==1 || string_comparison(trace,"OOO")==1 || string_comparison(inverse_trace,"OOO")==1){
        winner = 'O';
    }

    return winner;
}

bool has_free_cell(char board[n][n])
{
    bool free_cell=false;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(board[i][j] == '-'){
                free_cell = true;
            }
        }
    }
    return free_cell;
}

int main(void)
{
    printf("TicTacToe [InCoMpLeTo :'(]\n");

    char board[n][n] = {
        { '-', '-', '-' },
        { '-', '-', '-' },
        { '-', '-', '-' }
    };

    char turn = 'X';
    char winner = '-';
    int cell = 0;
    while (winner == '-' && has_free_cell(board)) {
        print_board(board);
        printf("\nTurno %c - Elija posición (número del 0 al %d): ", turn,
               CELL_MAX);
        int scanf_result = scanf("%d", &cell);
        if (scanf_result <= 0) {
            printf("Error al leer un número desde teclado\n");
            exit(EXIT_FAILURE);
        }
        if (cell >= 0 && cell <= CELL_MAX) {
            int row = cell / n;
            int colum = cell % n;
            if (board[row][colum] == '-') {
                board[row][colum] = turn;
                turn = turn == 'X' ? 'O' : 'X';
                winner = get_winner(board);
            } else {
                printf("\nCelda ocupada!\n");
            }
        } else {
            printf("\nCelda inválida!\n");
        }
    }
    print_board(board);
    if (winner == '-') {
        printf("Empate!\n");
    } else {
        printf("Ganó %c\n", winner);
    }
    return 0;
}
