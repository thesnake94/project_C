
// trier ce tableau avec qsort + créer des listes chainées

/*  
    1) trier array_int avec qsort
    2) creation de 5 "type_lst *" contenant un chiffre chacune
    3) chainer ses listes grace au "next". La premiere liste doit etre la valueur la plus petite, le derniere la plus grande
    4) bonus : si doublement chainer (avec un prev)
    5) bonus ; si bouclé
*/
#ifndef INCLUDES_H
# define INCLUDES_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


typedef struct my_lst{
    int nbr;
    struct my_lst *next;
    struct my_lst *prev;

} type_lst;






int comparator (const void * first, const void * second) {
   int firstInt = * (const int *) first;
    int secondInt = * (const int *) second;
    return firstInt - secondInt;
    }

int main(void){

    int array_int[5] = {5, 6, 4, 2, 1};
    int i = 0;

    // trier le tableau avec qsort
    qsort(array_int, 5, sizeof(int), comparator);

    while (i < 5){
        printf("%i\n", array_int[i]);
        i++;
    }

    // creation de 5 listes contenant un chiffre chacune
    type_lst *lst1 = (type_lst *)malloc(sizeof(type_lst));
    lst1->nbr = array_int[0];
    lst1->next = NULL;
    lst1->prev = NULL;

    type_lst *lst2 = (type_lst *)malloc(sizeof(type_lst));
    lst2->nbr = array_int[1];
    lst2->next = NULL;
    lst2->prev = NULL;

    type_lst *lst3 = (type_lst *)malloc(sizeof(type_lst));
    lst3->nbr = array_int[2];
    lst3->next = NULL;
    lst3->prev = NULL;

    type_lst *lst4 = (type_lst *)malloc(sizeof(type_lst));
    lst4->nbr = array_int[3];
    lst4->next = NULL;
    lst4->prev = NULL;

    type_lst *lst5 = (type_lst *)malloc(sizeof(type_lst));
    lst5->nbr = array_int[4];
    lst5->next = NULL;
    lst5->prev = NULL;

    // chainer les listes dans l'ordre croissant
    lst1->next = lst2;
    lst2->prev = lst1;
    lst2->next = lst3;
    lst3->prev = lst2;
    lst3->next = lst4;
    lst4->prev = lst3;
    lst4->next = lst5;
    lst5->prev = lst4;

    // boucle la liste
    lst1->prev = lst5;
    lst5->next = lst1;

    // affichage de la liste
    type_lst *lst = lst1;
    while(lst){
        printf("le nbr = %i\n", lst->nbr);
        lst = lst->next;
        if (lst == lst1) 
            break;
    }

    // libération de la mémoire allouée pour les listes
    free(lst1);
    free(lst2);
    free(lst3);
    free(lst4);
    free(lst5);

    return 0;
}






#endif