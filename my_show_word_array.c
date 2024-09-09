/*
** EPITECH PROJECT, 2019
** my_show_word_array
** File description:
** zdzf
*/
#include "include/my.h"

int my_show_word_array(char * const *tab)
{
    int a;
    a = 0;

    for (int a = 0; tab[a] != 0; a++){

        my_putstr(tab[a]);
        my_putchar('\n');
    }
    return (0);
}