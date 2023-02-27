#include <unistd.h>
#include <stdio.h>

int gd_putstr(char *str){
    int i = 0;

    while (str[i] != '\0'){
        i++;
    }

    write(1, str, i);
    return(i);
    
}

int main(void) {
    int nb_put = gd_putstr("Coucou");
    printf("%i\n", nb_put);
    return(1);
}