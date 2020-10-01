#include <stdio.h>
#include <math.h>

// Leia um numero fornecido pelo usuario.
// Se esse numero for positivo, calcule a raiz
// quadrada do numero. Se o numero for negativo,
// mostre uma mensagem dizendo que o numero eh invalido.

int main()
{
    int n, R;

    printf("Inform an integer: \n");
    scanf("%d", &n);

    if (n >= 0){
        R = sqrt(n);
        printf("\n%d\n", R);

        if (R * R == n) {
            printf("\nPrecise square root of %d: %d\n", n, R);
        }
        else {
            printf("\nApproximate square root of %d: %d\n", n, R);
            printf("The results were configured to ignore decimals.\n");
        }
    }
    else
        printf("\nInvalid number!\n");

    return 0;
}
