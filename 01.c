#include <stdio.h>

// Faca um programa que receba dois numeros e mostre qual deles eh o maior.

int main()
{
    int a, b;

    printf("Informe dois numeros inteiros quaisquer: \n");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("\n%d", a);
    else
        printf("\n%d", b);

    printf("\n");

    return 0;
}
