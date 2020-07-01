/*
** EPITECH PROJECT, 2019
** my_str_islower.c
** File description:
** return 1 if only lower else return 0
*/

int my_str_islower(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z')
            i++;
        else
            return (0);
    }
    return (1);
}