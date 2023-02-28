#include <unistd.h>

void gd_putnbr(int nb);
void gd_putchar(char c);

int gd_atoi(char *str) {
    int result = 0;
    int sign = 1;

    // Gestion du signe
    if (*str == '-') {
        sign = -1;
        str++;
    }

    // Conversion en entier
    while (*str != '\0') {
        if (*str >= '0' && *str <= '9') {
            result = result * 10 + (*str - '0');
            str++;
        }
        else {
            write(2, "Erreur: la chaîne contient des caractères non numériques.\n", 57);
            return 0;
        }
    }

    return result * sign;
}

void gd_putnbr(int nb) {
    if (nb < 0) {
        gd_putchar('-');
        nb = -nb;
    }
    if (nb >= 10) {
        gd_putnbr(nb / 10);
    }
    gd_putchar(nb % 10 + '0');
}

void gd_putchar(char c) {
    write(1, &c, 1);
}

int main(void) {
    int nb = gd_atoi("-500");
    gd_putnbr(nb);
    gd_putchar('\n');
    return 0;
}
