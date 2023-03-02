
// trier ce tableau avec qsort + créer des listes chainées

/*  
    1) trier array_int avec qsort
    2) creation de 5 "type_lst *" contenant un chiffre chacune
    3) chainer ses listes grace au "next". La premiere liste doit etre la valueur la plus petite, le derniere la plus grande
    4) bonus : si doublement chainer (avec un prev)
    5) bonus ; si bouclé
*/

#include "includes.h"

int compare_ints(const void *a, const void *b) {
    const int *pa = (const int *) a;
    const int *pb = (const int *) b;
    return (*pa > *pb) - (*pa < *pb);
}

int main(void) {
    int array_int[5] = {5, 6, 4, 2, 1};
    int i = 0;

    qsort(array_int, 5, sizeof(int), compare_ints);

    i = 0;
    while (i < 5) {
        printf("%i\n", array_int[i]);
        i++;
    }

    return 0;
}
