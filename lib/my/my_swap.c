/*
** EPITECH PROJECT, 2019
** my_swap.c
** File description:
** swap a b
*/

void my_swap(int *a, int *b)
{
    int i;

    i = *a;
    *a = *b;
    *b = i;
}
