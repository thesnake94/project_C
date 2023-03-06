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

    // Ouvrir le fichier en lecture
    FILE *fichier = fopen("sudo.txt", "r");
    if (fichier == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier.\n");
        return 1;
    }

    // Lire la grille depuis le fichier
    i = 0;
    while (i < 9) {
        j = 0;
        while (j < 9) {
            if (fscanf(fichier, "%d", &sudoku[i][j]) != 1) {
                printf("Erreur : impossible de lire la grille.\n");
                return 1;
            }
            j++;
        }
        i++;
    }

    // Fermer le fichier
    fclose(fichier);

    // Afficher la grille
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

    // Libérer la mémoire
    i = 0;
    while (i < 9) {
        free(sudoku[i]);
        i++;
    }
    free(sudoku);

    return 0;
}
