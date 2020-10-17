#include <stdio.h>

// Escreva um programa que, dados dois numeros inteiros,
// mostre na tela o maior deles,
// assim como a diferenc¸a existente entre ambos.


int main(){

    int n1, n2;

    printf("Inform two integers: \n");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2) {
        printf("%d is larger than %d.\n", n1, n2);
        printf("The diference between %d and %d is %d.\n", n1, n2, n1 - n2);
    }
    else if (n2 > n1) {
        printf("%d is larger than %d.\n", n2, n1);
        printf("The diference between %d and %d is %d.\n", n2, n1, n2 - n1);
    }

    return 0;
}
