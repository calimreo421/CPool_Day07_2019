/*
** EPITECH PROJECT, 2019
** my_compute_square_root.c
** File description:
** sqrt(nb)
*/

int my_compute_square_root(int nb)
{
    if (nb > 2147395600 || nb < 0)
        return (0);
    if (nb == 2147395600)
        return (46340);
    int i = 1;

    while (i * i != nb && (i / 2 < nb))
        i++;
    if (i * i == nb)
        return (i);
    return (0);
}
