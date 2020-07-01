/*
** EPITECH PROJECT, 2019
** my_strstr.c
** File description:
** strstr
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;
    int size = 0;

    while (to_find[size])
        size++;
    while (str[i]) {
        while (str[i] == to_find[j] && to_find[j]) {
            i++;
            j++;
        }
        if (size == j)
            return (str + (i - j));
        j = 0;
        i++;
    }
    return (0);
}
