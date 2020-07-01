/*
** EPITECH PROJECT, 2019
** my_str_isalpha.c
** File description:
** return 1 if only alpha else return 0
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
            i++;
        else
            return (0);
    }
    return (1);
}