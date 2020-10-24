#include <stdio.h>

// Faca um programa para verificar se
// um determinado numero inteiro e divisıvel por 3 ou
// 5, mas nao simultaneamente pelos dois.

int main(){

    int num;

    printf("Inform an integer: \n");
    scanf("%d", &num);

    if ((num % 3 == 0) && (num % 5 == 0)) {
        printf("It is not divisible by 3 or 5 only!\n");
    }
    else if (num % 3 == 0) {
        printf("It is divisible by 3!\n");
    }
    else if (num % 5 == 0) {
        printf("It is divisible by 5!\n");
    }

    return 0;
}
