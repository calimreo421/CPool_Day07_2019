/*
** EPITECH PROJECT, 2019
** my_getnbr.c
** File description:
** atoi
*/

int my_minu(int result, int less)
{
    while (less != 0) {
        result *= -1;
        less--;
    }
    return (result);
}

int my_genius(int less)
{
    int doublon = 1;

    while (less != 0) {
        doublon *= -1;
        less--;
    }
    if (doublon < 0)
        return (-2147483648);
    return (0);
}

int my_getnbr(char const *str)
{
    int result = 0;
    int less = 0;
    int i = 0;

    while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
    || (str[i] == '\v') || (str[i] == '\r')
    || (str[i] == '\f' || (str[i] == '+') || (str[i] == '-'))) {
        if (str[i] == '-')
            less++;
        i++;
    } while (str[i] && (str[i] >= '0') && (str[i] <= '9')) {
        result = result * 10;
        result += (int)str[i] - '0';
        if (result == -2147483648)
            return (my_genius(less));
        if (result < 0)
            return (0);
        i++;
    }
    return (my_minu(result, less));
}
