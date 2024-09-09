/*
** EPITECH PROJECT, 2019
** concat_params
** File description:
** zafezf
*/
#include <stdlib.h>
#include "include/my.h"

char *concat_params(int ac, char **av)
{
    int a = 0; int i = 0; int b = 0;
    char *test;
    test = malloc (sizeof(char) * (ac + 1));
    
    while (i < ac){

        while (av[i][b] != '\0'){

            test[a] = av[i][b];
            a = a + 1;
            b = b + 1;
        }
        test[a] = '\n';
        b = 0;
        i = i + 1;
        a = a + 1;
    }
    test[a] = '\0';
    return (test);
}