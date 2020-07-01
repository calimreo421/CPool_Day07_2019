/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** putstr
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
