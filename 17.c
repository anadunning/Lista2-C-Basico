#include <stdio.h>

// Faca um programa que calcule e mostre
// a area de um trapezio. Sabe-se que:
// A = (basemaior + basemenor) * altura / 2
// Lembre-se a base maior e a base menor
// devem ser numeros maiores que zero.

int main(){

    int b, B, h;

    printf("Inform larger side, smaller side and height: \n");

    printf("Smaller side: ");
    scanf("%d", &b);

    printf("Larger side: ");
    scanf("%d", &B);

    printf("Height: ");
    scanf("%d", &h);

    printf("Trapezium area: %d\n", ((B + b) * h) / 2);

    return 0;
}
