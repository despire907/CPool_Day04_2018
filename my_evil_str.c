/*
** EPITECH PROJECT, 2018
** task04
** File description:
** task04
*/
#include <unistd.h>

char *my_evil_str(char *str);
void my_change(char *a, char *b);
int my_lil(char const *str);

    
void my_change(char *a, char *b)
{
    char c = *a;
    *a = *b;
    *b = c;
}

int my_lil(char *str)
{
    int bobo;

    bobo = 0;
    while (str[bobo] != '\0'){
        bobo = bobo + 1;
    }
    return (bobo);
}

char *my_evil_str(char *str)
{
    int str_len = my_strlen(str);
    int bibi = 0;
    while (bibi < str_len / 2){
        my_change(&str[bibi], &str[str_len - 1 - bibi]);
        bibi = bibi + 1;
    }
    return (&str[0]);
}
