#include <stdio.h>

// Dados tres valores, A, B, C, verificar se
// eles podem ser valores dos lados de um triangulo
// e, se forem, se eh um triangulo escaleno,
// equilatero ou isosceles, considerando os seguintes conceitos:
// # O comprimento de cada lado de um triangulo
// eh menor do que a soma dos outros dois lados.
// # Chama-se equilatero o triangulo que tem tres
// lados iguais.
// # Denominam-se isosceles o triangulo que tem
// o comprimento de dois lados iguais.
// # Recebe o nome de escaleno o triangulo
// que tem os tres lados diferentes.

int main() {

    int A, B, C;

    printf("Inform three integers: \n");
    scanf("%d %d %d", &A, &B, &C);

    if ((A > (B - C) && A < (B + C)) && (B > (A - C) && B < (A + C)) && (C > (A - B) && C < (A + B))) {
       printf("%d, %d and %d can be sides of a triangle.\n", A, B, C);

       if (A == B && A == C) {
            printf("Equilateral triangle\n");
       }
       else if ((A == B) || (A == C) || (B == C)) {
            printf("Isosceles triangle\n");
       }
       else if ((A != B) && (A != C) && (B != C)) {
            printf("Scalene triangle\n");
       }
    }
    else {
        printf("%d, %d and %d cannot be sides of a triangle.\n", A, B, C);
    }

    return 0;
}
