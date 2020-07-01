/*
** EPITECH PROJECT, 2019
** my_str_isprintable.c
** File description:
** return 1 if only printable else return 0
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= ' ')
            i++;
        else
            return (0);
    }
    return (1);
}