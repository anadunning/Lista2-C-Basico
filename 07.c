#include <stdio.h>

// Faca um programa que receba dois numeros
// e mostre o maior. Se por acaso, os dois
// numeros forem iguais, imprima a mensagem: Numeros iguais

int main(){

    int n1, n2;

    printf("Inform two integers: \n");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2) {
        printf("%d is larger than %d.\n", n1, n2);
    }
    else if (n2 > n1) {
        printf("%d is larger than %d.\n", n2, n1);
    }
    else {
        printf("The numbers are equal.\n");
    }

    return 0;
}
