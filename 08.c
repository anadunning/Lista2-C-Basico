#include <stdio.h>

// Faca um programa que leia 2 notas de um aluno,
// verifique se as notas sao validas e
// exiba na tela a media destas notas.
// Uma nota valida deve ser, obrigatoriamente,
// um valor entre 0.0 e 10.0,
// onde caso a nota nao possua um valor valido,
// este fato deve ser informado ao usuario e o programa termina.

int main(){

    double grade1, grade2;

    printf("Inform the student's grades: \n");
    scanf("%lf", &grade1);
    scanf("%lf", &grade2);

    if ((grade1 < 0.0 || grade1 > 10.0) || (grade2 < 0.0 || grade2 > 10.0)) {
        printf("At least one invalid grade!\n");
    }
    else {
        printf("Average: %.1lf\n", (grade1 + grade2) / 2);
    }

    return 0;
}
