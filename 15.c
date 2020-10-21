#include <stdio.h>

// Usando switch, escreva um programa que
// leia um inteiro entre 1 e 7 e imprima o dia
// da semana correspondente a este numero.
// Isto eh, domingo se 1, segunda-feira se 2, e
// assim por diante.

int main(){

    int dia;

    printf("Inform an integer between 1 and 7: \n");
    scanf("%d", &dia);

    switch(dia) {

    case 1:
        printf("Sunday\n");
        break;

    case 2:
        printf("Monday\n");
        break;

    case 3:
        printf("Tuesday\n");
        break;

    case 4:
        printf("Wednesday\n");
        break;

    case 5:
        printf("Thursday\n");
        break;

    case 6:
        printf("Friday\n");
        break;

    case 7:
        printf("Saturday\n");
        break;

    default:
        printf("Invalid entry!\n");
    }

    return 0;
}
