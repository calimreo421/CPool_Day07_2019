/*
** EPITECH PROJECT, 2019
** my_find_prime_sup.c
** File description:
** find next prime
*/

int my_od_qtowr(int nb)
{
    if ((nb % 2 == 0 && nb != 2) || nb <= 1)
        return (0);
    int i = 3;

    while (i * i <= nb) {
        if ((nb % i) == 0)
            return (0);
        i += 2;
    }
    return (1);
}

int my_find_prime_sup(int nb)
{
    if (nb < 2)
        return (2);
    while (my_od_qtowr(nb) == 0)
        nb++;
    return (nb);
}
