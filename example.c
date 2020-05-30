//
// Created by marim on 30.05.2020.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char set[] = {'a','b','c'}; //задана множина
    int n = 3; //кількість елементів

    int i, j, size;

    size = pow(2, n); //для підрахунку кількості підмножин використовється формула 2^n
    for ( i = 0; i < size; i++ )
    {
        printf("{");
        for ( j = 0; j < size; j++ ) //перебір
            if ( i & (1 << j)  //логічний сдвиг вліво, & - и, бітове значення в позиції j 
                printf("%c", set[j]); //вивід j елементу з set
        printf("}\n");
    }
    return 0;
}


