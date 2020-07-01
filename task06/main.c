/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

void my_putchar(char c);
int my_putstr(char const *str);

int my_cmp6(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i]) {
        if (s1[i] > s2[i])
            return (1);
        if (s1[i] < s2[i])
            return (-1);
        if (s1[i] == '\0')
            return (0);
        i++;
    }
    return (0);
}

void my_swap_for_char(char **argv, char **argv1)
{
    char *t;

    t = *argv;
    *argv = *argv1;
    *argv1 = t;
}

void print6(int argc, char **argv)
{
    int i = 0;

    while (i != argc) {
        my_putstr(argv[i]);
        my_putchar('\n');
        i++;
    }
}

int main(int argc, char **argv)
{
    int i = 0;
    char **str;
    int j = 0;

    while ((i < argc)) {
        str = argv;
        while (str - argv < argc - 1) {
            if (my_cmp6(*str, *(str + 1)) > 0) {
                my_swap_for_char(str, str + 1);
            }
            str++;
        }
        i++;
    }
    print6(argc, argv);
    return (0);
}