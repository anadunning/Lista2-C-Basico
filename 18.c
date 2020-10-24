#include <stdio.h>

// Faca um programa que mostre ao usuario
// um menu com 4 opcoes de operacoes matematicas
// (as basicas, por exemplo). O usuario escolhe
// uma das opcoes e o seu programa entao pede
// dois valores numericos e realiza a operacao,
// mostrando o resultado.

int main(){

    int op;
    int a, b;

    printf("Choose an operation from:  \n");
    printf("1) + :\n");
    printf("2) - :\n");
    printf("3) * :\n");
    printf("4) / :\n");

    scanf("%d", &op);

    switch(op) {

    case 1:
        printf("Inform two integers: \n");
        scanf("%d", &a);
        scanf("%d", &b);
        printf("Operation chosen => addition: ");
        printf("%d + %d = %d\n", a, b, a+b);
        break;

    case 2:
        printf("Inform two integers: \n");
        scanf("%d", &a);
        scanf("%d", &b);
        printf("Operation chosen => Subtraction: ");
        printf("%d - %d = %d\n", a, b, a-b);
        break;

    case 3:
        printf("Inform two integers: \n");
        scanf("%d", &a);
        scanf("%d", &b);
        printf("Operation chosen => Multiplication: ");
        printf("%d * %d = %d\n", a, b, a*b);
        break;

    case 4:
        printf("Inform two integers: \n");
        scanf("%d", &a);
        scanf("%d", &b);

            if (b == 0) {
                printf("Divisor cannot be zero.\n");
                break;
            }

        printf("Operation chosen => Division: ");
        printf("%d / %d = %d\n", a, b, a/b);
        break;

    default:
        printf("Invalid option!");
    }

    return 0;
}
