#include <stdio.h>

// Faca um programa que receba a altura
// e o sexo de uma pessoa e
// calcule e mostre seu
// peso ideal, utilizando as seguintes formulas
// (onde h corresponde a altura):
// # Homens: (72.7 * h) − 58
// # Mulheres: (62.1 * h) − 44.7

int main(){

    double h;
    char sex[2];

    printf("Inform the person\'s height: \n");
    scanf("%lf", &h);

    printf("Inform the person\'s sex: \n");
    scanf("%s", sex);

    if (*sex == 'M') {
        printf("Ideal weight: %.2lf kg.\n", ((72.7 * h) - 58));
    }
    else if (*sex == 'F') {
        printf("Ideal weight: %.2lf kg.\n", ((62.1 * h) - 44.7));
    }

    return 0;
}
