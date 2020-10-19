#include <stdio.h>
#include <math.h>

// Ler um numero inteiro. Se o numero lido for negativo,
// escreva a mensagem "Numero invalido". Se o numero for positivo,
// calcular o logaritmo deste numero.

// Considerando logaritmo natural
// Considerando logaritmo na base 2
// Considerando logaritmo na base 10

int main(){

    int n;
    double L, L2, L10;

    printf("Inform an integer: \n");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid number!\n");
    }
    else {
        L = log(n);
        L2 = log2(n);
        L10 = log10(n);
        printf("log(%d) = %.2lf\n", n, L);
        printf("log2(%d) = %.2lf\n", n, L2);
        printf("log10(%d) = %.2lf\n", n, L10);
    }

    return 0;
}
