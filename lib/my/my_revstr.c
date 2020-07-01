/*
** EPITECH PROJECT, 2019
** my_revstr.c
** File description:
** reverse a string
*/

char *my_revstr(char *str)
{
    int count = 0;
    int i = 0;
    char j = 0;

    while (str[count])
        count++;
    count--;
    while (i < ((count + 1) / 2)) {
        j = str[i];
        str[i] = str[count - i];
        str[count - i] = j;
        i++;
    }
    return (str);
}