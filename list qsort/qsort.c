#include "includes.h"


int comparator (const void * first, const void * second) {
   int firstInt = * (const int *) first;
    int secondInt = * (const int *) second;
    return firstInt - secondInt;
    }

int main () {
   int array_int[5] = {5,6,8,9,1};
   int i = 0;


   printf("avant \n");
   while (i < 5 ){
        printf("%i\n", array_int[i]);
        i++;
    }

    //trier array_int avec qsort
    qsort(array_int, 5, sizeof(int), comparator);

    i = 0;
    printf("après\n");
    while (i < 5){
        printf("%i\n", array_int[i]);
        i++;
    }

   return 0;
}
