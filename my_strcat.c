/*
** EPITECH PROJECT, 2019
** my_my_strcat.c
** File description:
** sqrt(nb)
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;

    while (dest[j])
        j++;
    while (src[i]) {
        dest[j + i] = src[i];
        i++;
    }
    dest[j + i] = '\0';
    return (dest);
}