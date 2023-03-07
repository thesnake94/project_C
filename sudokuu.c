#include <stdio.h>
#include <stdlib.h>

int main(void){
    int **board;
    int i = 0;
    int j = 0;

    //allouer la mémoire du int ** -> 9lignes (9 int *)
    board = (int**)malloc(9* sizeof(int*));

    //loop *9 allouer la mémoire des int* -> (9 int)
    while (i < 9) {
        board[i] = (int*)malloc(9 * sizeof(int));
        i++;
    }

    // initialise tableau avec zéro
    i = 0;
    while (i < 9) {
        j = 0;
        while (j < 9) {
            board[i][j] = 0;
            j++;
        }
        i++;
    }



    // Utiliser le tableau ici



   // Afficher le tableau
    i = 0;
    while (i < 9) {
        j = 0;
        while (j < 9) {
            printf("%d ", board[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    // libére mémoire
    i = 0;
    while (i < 9) {
        free(board[i]);
        i++;
    }
    free(board);

    return 0;
}
