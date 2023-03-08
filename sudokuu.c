#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    int **board;
    int i = 0;
    int fd;
    ssize_t bytes_read;
    char buf[10];

    // ouvrir sudoku.txt
    fd = open("sudoku.txt", O_RDONLY);

    if (fd == -1)
    {
        perror("Erreur lors de l'ouverture du fichier");
        exit(EXIT_FAILURE);
    }

    // allouer la mémoire du int ** -> 9lignes (9 int *)
    board = (int **)malloc(9 * sizeof(int *));

    // loop *9 allouer la mémoire des int* -> (9 int)
    while (i < 9)
    {
        board[i] = (int *)malloc(9 * sizeof(int));
        i++;
    }

    // lire sudoku.txt et stocker dans le tableau
    i = 0;
    while ((bytes_read = read(fd, buf, 10)) > 0 && i < 81)
    {
        if (buf[0] >= '0' && buf[0] <= '9')
        {
            board[i / 9][i % 9] = buf[0] - '0';
            i++;
        }
    }

    // fermer le fichier
    close(fd);

    // libére mémoire
    i = 0;
    while (i < 9)
    {
        free(board[i]);
        i++;
    }
    free(board);

    return 0;
}
