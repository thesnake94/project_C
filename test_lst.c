#include "includes.h"

// fonction comparator dans le includes.h

int main (void) {
   int array_int[5] = {5,6,8,9,1};
   int i = 0;


    printf(" avant \n");

    while (i < 5){
        printf("%i\n", array_int[i]);
        i++;
    }

    //trier array_int avec qsort
    qsort(array_int, 5, sizeof(int), comparator);



    // liste
    type_lst *lst1 = (type_lst *)malloc(sizeof(type_lst));
    lst1->nbr = array_int[0];

    type_lst *lst2 = (type_lst *)malloc(sizeof(type_lst));
    lst2->nbr = array_int[1];

    type_lst *lst3 = (type_lst *)malloc(sizeof(type_lst));
    lst3->nbr = array_int[2];

    type_lst *lst4 = (type_lst *)malloc(sizeof(type_lst));
    lst4->nbr = array_int[3];

    type_lst *lst5 = (type_lst *)malloc(sizeof(type_lst));
    lst5->nbr = array_int[4];


    // chaine liste
    lst1->next = lst2;
    lst2->next = lst3;
    lst3->next = lst4;
    lst4->next = lst5;
    lst5->next = NULL;

    // affiche liste
    printf("\n Après le tri : \n");

    type_lst *lst = lst1;
    while(lst){
        printf("le nbr = %i\n", lst->nbr);
        lst = lst->next;
    }

}  