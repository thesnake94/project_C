#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char **argv){
    char buf[90];
    int i = 0;
    int j = 0;
    int **board;

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        printf("Erreur : impossible d'ouvrir le fichier %s\n", argv[1]);
        return 1;
    }
    int size = read(fd, buf, 90);

    // allouer la mémoire du int ** -> 9lignes (9 int *)
    board = (int **)malloc(9 * sizeof(int *));

    // loop *9 allouer la mémoire des int* -> (9 int)
    while (i < 9){
        board[i] = (int *)malloc(9 * sizeof(int));
        i++;
    }

    buf[size] = '\0';

    // extrait valeurs & stocker dans le `board`
    i = 0;
    while (buf[i] != '\0' && j < 81){
        if (buf[i] >= '1' && buf[i] <= '9')
            board[j/9][j%9] = buf[i] - '0';
            j++;
        
        i++;
    }

    // affiche valeurs de `board`
    i = 0;
    while (i < 9){
        j = 0;
        while (j < 9){
            printf("%d ", board[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    close(fd);

    // libere mémoire
    i = 0;
    while (i < 9){
        free(board[i]);
        i++;
    }

    free(board);
    return 0;
}
