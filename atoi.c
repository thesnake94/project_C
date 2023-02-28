#include <stdio.h>

void gd_putnbr (int nb);
void gd_putchar (char c);


int gd_atoi(char *str){
    int i = 0;
    int ret = 0;
    int neg = 1;
    int nb;

    while(str[i]){
        if ((str[i] >= 48 && str[i] <=57) || (str[i] == 43 || str[i] == 45)) // entre 48 et 59 dans la table ascii pour les chiffres
            break;
        i++;
    }
    if (str[i] == 43 || str[i] == 45){ //dans la tbables ascii pour le plus et le moins
        if (str[i] == 45)
            neg = -1;
        i++;
    } 

    while(str[i]) {
        nb = str[i] - 48;
        ret = ret*10 + nb;
        i++;
    }

    return(ret*neg);

}

int main(void){
    int nb = gd_atoi("-51234");
    // gd_putnbr(nb);
    // gd_putchar('\n');
    printf("%i\n", nb);

}