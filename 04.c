#include <stdio.h>
#include <math.h>

// Faca um programa que leia um numero e,
// caso ele seja positivo, calcule e mostre:
// # O numero digitado ao quadrado
// # A raiz quadrada do numero digitado

int main() {

    int num, d, r;

    printf("Inform an integer number: \n");
    scanf("%d", &num);

    if (num >= 0) {
        d = num * num;
        r = sqrt(num);

        printf("\nSquare %d: %d\n", num, d);
        printf("\nSquare root of %d: %d\n", num, r);
    }

    return 0;
}
