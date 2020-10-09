#include <stdio.h>
#include <math.h>

// Leia um n�mero real.
// Se o n�mero for positivo, imprima a raiz quadrada.
// Do contr�rio, imprima o n�mero ao quadrado.

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
