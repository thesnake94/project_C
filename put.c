#include <unistd.h>

void gd_putchar(char c) {
    write(1, &c, 1);
}

int gd_putstr(char *str){
    printf();
}

int main(void) {
    // gd_putchar('a');
    // gd_putchar('\n');
    int nb_put = gd_putstr("Coucou");

}