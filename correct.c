#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

#define GRID_SIZE 9

int main(int argc, char **argv) {
    char buf[GRID_SIZE*GRID_SIZE+1];

    int fd = open(argv[1], 0, O_RDONLY);
    if (fd == -1) {
        printf("Erreur : impossible d'ouvrir le fichier %s\n", argv[1]);
        return 1;
    }
    
    int nb_read = read(fd, buf, GRID_SIZE*GRID_SIZE);
    if (nb_read < GRID_SIZE*GRID_SIZE) {
        printf("Erreur : le fichier %s ne contient pas une grille de Sudoku valide\n", argv[1]);
        close(fd);
        return 1;
    }
    
    buf[GRID_SIZE*GRID_SIZE] = '\0';
    close(fd);
    
    for (int i = 0; i < GRID_SIZE*GRID_SIZE; i++) {
        printf("%c ", buf[i]);
        if ((i+1) % GRID_SIZE == 0) {
            printf("\n");
        }
    }
    
    return 0;
}
