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


    // Remplir tableau
    sudoku[0][0] = 1;
    sudoku[0][1] = 2;
    sudoku[0][2] = 3;
    sudoku[0][3] = 4;
    sudoku[0][4] = 5;
    sudoku[0][5] = 6;
    sudoku[0][6] = 7;
    sudoku[0][7] = 8;
    sudoku[0][8] = 9;

    sudoku[1][0] = 1;
    sudoku[1][1] = 2;
    sudoku[1][2] = 3;
    sudoku[1][3] = 4;
    sudoku[1][4] = 5;
    sudoku[1][5] = 6;
    sudoku[1][6] = 7;
    sudoku[1][7] = 8;
    sudoku[1][8] = 9;

    sudoku[2][0] = 1;
    sudoku[2][1] = 2;
    sudoku[2][2] = 3;
    sudoku[2][3] = 4;
    sudoku[2][4] = 5;
    sudoku[2][5] = 6;
    sudoku[2][6] = 7;
    sudoku[2][7] = 8;
    sudoku[2][8] = 9;

    sudoku[3][0] = 1;
    sudoku[3][1] = 2;
    sudoku[3][2] = 3;
    sudoku[3][3] = 4;
    sudoku[3][4] = 5;
    sudoku[3][5] = 6;
    sudoku[3][6] = 7;
    sudoku[3][7] = 8;
    sudoku[3][8] = 9;

    sudoku[4][0] = 1;
    sudoku[4][1] = 2;
    sudoku[4][2] = 3;
    sudoku[4][3] = 4;
    sudoku[4][4] = 5;
    sudoku[4][5] = 6;
    sudoku[4][6] = 7;
    sudoku[4][7] = 8;
    sudoku[4][8] = 9;

    sudoku[5][0] = 1;
    sudoku[5][1] = 2;
    sudoku[5][2] = 3;
    sudoku[5][3] = 4;
    sudoku[5][4] = 5;
    sudoku[5][5] = 6;
    sudoku[5][6] = 7;
    sudoku[5][7] = 8;
    sudoku[5][8] = 9;

    sudoku[6][0] = 1;
    sudoku[6][1] = 2;
    sudoku[6][2] = 3;
    sudoku[6][3] = 4;
    sudoku[6][4] = 5;
    sudoku[6][5] = 6;
    sudoku[6][6] = 7;
    sudoku[6][7] = 8;
    sudoku[6][8] = 9;

    sudoku[7][0] = 1;
    sudoku[7][1] = 2;
    sudoku[7][2] = 3;
    sudoku[7][3] = 4;
    sudoku[7][4] = 5;
    sudoku[7][5] = 6;
    sudoku[7][6] = 7;
    sudoku[7][7] = 8;
    sudoku[7][8] = 9;

    sudoku[8][0] = 1;
    sudoku[8][1] = 2;
    sudoku[8][2] = 3;
    sudoku[8][3] = 4;
    sudoku[8][4] = 5;
    sudoku[8][5] = 6;
    sudoku[8][6] = 7;
    sudoku[8][7] = 8;
    sudoku[8][8] = 9;

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
