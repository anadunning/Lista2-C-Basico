#include <stdio.h>
#include <math.h>

// Leia um número real.
// Se o número for positivo, imprima a raiz quadrada.
// Do contrário, imprima o número ao quadrado.

int main(){

    float n, R;

    printf("Inform a float number: \n");
    scanf("%f", &n);

    if (n >= 0) {
        R = sqrt(n);
        printf("\nSquare root of %.1f: %.1f\n", n, R);
    }
    else {
        R = n * n;
        printf("\nSquare of %.0f: %.1f\n", n, R);
    }
    return 0;
}
