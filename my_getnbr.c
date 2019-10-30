/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** my_getnbr
*/

#include <stdio.h>

int my_getnbr(char const *str)
{
    int i = 0;
    int r = 0;
    int neg = 0;

    while (str[i] >= '9' || str[i] <= '0') {
        if (str[i] >= '9' || str[i] <= '0')
            neg++;
        i++;
    }
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9') {
        r = r * 10 + (str[i] - 48);
        i++;
    }
    if (neg % 2 != 0)
        r = r * (-1);
    return (r);
}

int main(int result, char const **str)
{
  result = my_getnbr(str[1]);
  printf("%i", result);
  return (0);
}
