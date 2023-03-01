
// trier ce tableau avec qsort + créer des listes chainées

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
