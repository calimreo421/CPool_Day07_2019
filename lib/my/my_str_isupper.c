/*
** EPITECH PROJECT, 2019
** my_str_isupper.c
** File description:
** return 1 if only upper else return 0
*/

int my_str_isupper(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            i++;
        else
            return (0);
    }
    return (1);
}