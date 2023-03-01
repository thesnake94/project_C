#include <stdlib.h>
#include <stdio.h>


char *join_two_string(char const *s1, char const *s2){
    char *ret;
    int len_s1 = 0;
    int len_s2 = 0;
    int i;
    int j;

    while(s1[len_s1])
        len_s1++;
    while(s2[len_s2])
        len_s2++;

    ret = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
    if (ret == NULL)
        return NULL;

    

    return(ret);
}