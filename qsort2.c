#include "includes.h"


int comparator (const void * first, const void * second) {
   int firstInt = * (const int *) first;
    int secondInt = * (const int *) second;
    return firstInt - secondInt;
    }

int main () {
   int array_int[5] = {5,6,8,9,1};
   int i = 0;


    printf(" avant \n");
    while (i < 5 ){
        printf("%i\n", array_int[i]);
        i++;
    }

    //trier array_int avec qsort
    qsort(array_int, 5, sizeof(int), comparator);


    printf("\n trié : \n");



    // listes
    type_lst *lst1 = (type_lst *)malloc(sizeof(type_lst));
    lst1->nbr = array_int[0];
    lst1->next = NULL;

    type_lst *lst2 = (type_lst *)malloc(sizeof(type_lst));
    lst2->nbr = array_int[1];
    lst2->next = NULL;

    type_lst *lst3 = (type_lst *)malloc(sizeof(type_lst));
    lst3->nbr = array_int[2];
    lst3->next = NULL;

    type_lst *lst4 = (type_lst *)malloc(sizeof(type_lst));
    lst4->nbr = array_int[3];
    lst4->next = NULL;

    type_lst *lst5 = (type_lst *)malloc(sizeof(type_lst));
    lst5->nbr = array_int[4];
    lst5->next = NULL;


    // chaine liste
    lst1->next = lst2;
    lst2->next = lst3;
    lst3->next = lst4;
    lst4->next = lst5;

    // affiche liste
    type_lst *lst = lst1;
    while(lst){
        printf("le nbr = %i\n", lst->nbr);
        lst = lst->next;
        if (lst == lst1) 
            break;
    }

    // liberer memoire
    free(lst1);
    free(lst2);
    free(lst3);
    free(lst4);
    free(lst5);

    return 0;
}
