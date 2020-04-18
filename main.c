#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

float input_float(){
    float a;
    char c[500];
    while (!(scanf("%f",&a))){
        printf("Введіть число - ");
        scanf("%s",c);
    }
    return a;
}
int input_int() {
    int a;
    float b;
    b = input_float(b);
    a = (int) b;
    if (a == b)
        return a;
    else{
        printf("\nВведіть ціле число - ");
        return input_int();
    }
}
int main(){
    int a[10], x, k, j, i, n;
    // n - розмірність вектору
    printf("\nВведіть кількість елементів - ");
    n = input_int();
    int P[n];
    for (int j = 0; j < n; j++){
        printf("\nВведіть P[%d]", j);
        P[j] = input_int();
    }
    printf("\nВведений Масив P[n]:\n");
    for (int j = 0; j < n; j++){
        printf("%d ", P[j]);
    }
    printf("\n");
    printf("\nГенерація підмножин:\n");
    k = pow(2, n);
    for ( i = 0; i < k; i++ )
    {
        printf("{");
        for ( x = 0; x < n; x++ )
            if ( i & (1 << x) )
                printf("%d ", P[x]);
        printf("}\n");
    }
    return 0;
}
int new(void){
    setlocale(LC_CTYPE,"ukr");
    return 0;
}
