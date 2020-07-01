/*
** EPITECH PROJECT, 2019
** my_strupcase.c
** File description:
** puts every letter in lowercase
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    return (str);
}