#include <stdio.h>

// Faca um programa que calcule e mostre
// a area de um trapezio. Sabe-se que:
// A = (basemaior + basemenor) * altura / 2
// Lembre-se a base maior e a base menor
// devem ser numeros maiores que zero.

int main(){

    double dis, gas, consumption;

    printf("Inform the distance in km: \n");
    scanf("%lf", &dis);

    printf("Inform the fuel in l: \n");
    scanf("%lf", &gas);

    consumption = dis / gas;

    if (consumption < 8) {
        printf("Please sell your car!\n");
    }
    else if (consumption >= 8 && consumption < 14) {
        printf("Economical!\n");
    }
    else {
        printf("Super economical!\n");
    }

    return 0;
}
