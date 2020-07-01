/*
** EPITECH PROJECT, 2019
** my_put_nbr.c
** File description:
** display all int
*/

void my_putchar(char c);

void my_min_integer(void)
{
    my_putchar('-');
    my_putchar('2');
    my_putchar('1');
    my_putchar('4');
    my_putchar('7');
    my_putchar('4');
    my_putchar('8');
    my_putchar('3');
    my_putchar('6');
    my_putchar('4');
    my_putchar('8');
}

int my_put_nbr(int nbr)
{
    int result;

    if (nbr == -2147483648) {
        my_min_integer();
        return (0);
    }
    if (nbr < 0) {
        my_putchar('-');
        nbr = nbr * (-1);
    }
    if (nbr >= 10) {
        result = nbr % 10;
        nbr = nbr / 10;
        my_put_nbr(nbr);
        my_putchar(result + '0');
    } else
        my_putchar(nbr + '0');
    return (0);
}
