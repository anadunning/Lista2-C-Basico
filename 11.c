#include <stdio.h>

// Escreva um programa que leia um numero inteiro maior
// do que zero e devolva, na tela, a soma de todos
// os seus algarismos. Por exemplo, ao numero 251
// correspondera o valor 8 (2 + 5 + 1).
// Se o numero lido nao for maior do que zero,
// o programa terminara com a mensagem “Numero invalido”.

int main(){

    int n, x, sum = 0;

    printf("Inform an integer: \n");
    scanf("%d", &n);
    x = n;

    if (n < 0) {
        printf("Invalid number!\n");
    }
    else {
        while(n > 0) {
            sum = sum + (n % 10);
            n = n / 10;
        }
        printf("Sum of the digits of %d is %d.\n", x, sum);
    }

    return 0;
}
