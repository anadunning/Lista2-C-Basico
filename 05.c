#include <stdio.h>

// Faca um programa que receba um numero inteiro
// e verifique se este numero eh par ou impar.

int main(){

    int num;

    printf("Inform an integer: \n");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("The number %d is EVEN (PAR).\n", num);
    }
    else {
        printf("The number %d is ODD (IMPAR).\n", num);
    }

    return 0;
}
