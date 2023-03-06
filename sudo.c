#include <stdio.h>
#include <stdlib.h>

int main() {
    int **sudoku;
    int i = 0, j = 0;

    sudoku = (int **)malloc(9 * sizeof(int *));
    while (i < 9) {
        sudoku[i] = (int *)malloc(9 * sizeof(int));
        j = 0;
        while (j < 9) {
            sudoku[i][j] = 0;
            j++;
        }
        i++;
    }
   

    
    
    // Afficher tableau
    i = 0;
    while (i < 9) {
        j = 0;
        while (j < 9) {
            printf("%d ", sudoku[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    // libére mémoire
    i = 0;
    while (i < 9) {
        free(sudoku[i]);
        i++;
    }
    free(sudoku);

    return 0;
}