/*
** EPITECH PROJECT, 2018
** task02
** File description:
** task02
*/
 
int my_putstr(char const *str);

int my_putstr(char const *str)
{
    int bobo;

    bobo = 0;
    while (str[bobo] != '\0'){
        my_putchar(str[bobo]);
        bobo = bobo + 1;
    }
}
