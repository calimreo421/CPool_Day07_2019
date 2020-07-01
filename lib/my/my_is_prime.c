/*
** EPITECH PROJECT, 2019
** my_is_prime.c
** File description:
** if prime ret1 else ret0
*/

int my_is_prime(int nb)
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
