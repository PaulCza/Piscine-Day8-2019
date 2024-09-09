/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** dzadz
*/
#include <stdlib.h>
#include "include/my.h"

char*my_strdup(char const *src)
{
    char *test;
    int i;
    i = 0;
    test = malloc(sizeof(char) * (my_strlen(src) + 1));
    
    while (src[i]){
        
        test[i] = src[i];
        i = i + 1;
    }
    test[i] = 0;
    
    return (test);
}