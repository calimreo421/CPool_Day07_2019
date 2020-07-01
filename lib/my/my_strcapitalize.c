/*
** EPITECH PROJECT, 2019
** my_strcapitalize.c
** File description:
** puts every letter in uppercase
*/

char *my_low(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    return (str);
}

char *my_strcapitalize(char *str)
{
    int i = 0;
    my_low(str);

    if (str[i] >= 'a' && str[i] <= 'z') {
        str[0] = str[0] - 32;
        i++;
    }
    while (str[i]) {
        if ((str[i] >= 'a' && str[i] <= 'z') &&
        (str[i - 1] == ' ' || str[i - 1] == '-' || str[i - 1] == '+')) {
		    str[i] = str[i] - 32;
        }
	    i++;
    }
    return (str);
}