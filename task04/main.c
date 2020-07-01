/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include <unistd.h>

void my_pchar(char c)
{
    write(1, &c, 1);
}

int my_pstr(char const *str)
{
    int i;

    i = 0;
    while (str[i]) {
        my_pchar(str[i]);
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i = 0;

    while (i != argc) {
        my_pstr(argv[i]);
        my_pchar('\n');
        i++;
    }
    return (0);
}