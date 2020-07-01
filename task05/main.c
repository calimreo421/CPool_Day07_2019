/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include <unistd.h>

void my_pchar2(char c)
{
    write(1, &c, 1);
}

int my_pstr2(char const *str)
{
    int i;

    i = 0;
    while (str[i]) {
        my_pchar2(str[i]);
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i = 0;

    while (i < argc) {
        my_pstr2(argv[argc - 1]);
        my_pchar2('\n');
        argc--;
    }
    return (0);
}