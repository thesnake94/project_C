// reunir 2 chaines de caracteres


#include <stdlib.h>
#include <stdio.h>


char *join_two_string(char const *str1, char const *str2){
    char *ret;
    int len_str1 = 0;
    int len_str2 = 0;

    while(str1[len_str1])
        len_str1++;
    while(str2[len_str2])
        len_str2++;

    ret = (char *)malloc(sizeof(char) * (len_str1 + len_str2 + 1));
    if (ret == NULL)
        return NULL;

    
    char *p = ret;
    while(*str1)
        *p++ = *str1++;

    while(*str2)
        *p++ = *str2++;

    *p = '\0';  

    return(ret);

}

int main(void) {
    char *str1 = "test";
    char *str2 = "zebi";
    char *dup;

    dup = join_two_string(str1, str2);
    printf("%s\n", dup);
    free(dup);


}