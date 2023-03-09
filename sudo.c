#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char **argv){
    char buf[90];
    int i = 0;
    int **board;

    int fd = open(argv[1], O_RDONLY);
    int size = read(fd, buf, 90);

    // allouer la mémoire du int ** -> 9lignes (9 int *)
    board = (int **)malloc(9 * sizeof(int *));

    // loop *9 allouer la mémoire des int* -> (9 int)
    while (i < 9){
        board[i] = (int *)malloc(9 * sizeof(int));
        i++;
    }

    buf[size] = '\0';
    printf("%s\n", buf);
    printf("%i\n", size);
    close(fd);

    // libere mémoire
    i = 0;
    while (i < 9){
        free(board[i]);
        i++;
    }

    free(board);
}