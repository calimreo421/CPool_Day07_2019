/*
** EPITECH PROJECT, 2019
** my_my_strncat.c
** File description:
** sqrt(nb)
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j = 0;

    while (dest[j])
        j++;
    while (src[i] && i < nb) {
        dest[j + i] = src[i];
        i++;
    }
    dest[j + i] = '\0';
    return (dest);
}
