#include <stdio.h>

// Faca um algoritmo que calcule a media ponderada
// das notas de 3 provas. A primeira e a segunda
// prova tem peso 1 e a terceira tem peso 2.
// Ao final, mostrar a media do aluno e indicar
// se o aluno foi aprovado ou reprovado.
// A nota para aprovacao deve ser igual ou
// superior a 60 pontos.

int main(){

    double grade1, grade2, grade3, avg;

    printf("Inform three grades: \n");
    scanf("%lf", &grade1);
    scanf("%lf", &grade2);
    scanf("%lf", &grade3);

    avg = ((grade1 * 1) + (grade2 * 1) + (grade3 * 2)) / 4;
    printf("%.1lf\n", avg);

    if (avg >= 60) {
        printf("Pass\n");
    }
    else {
        printf("Fail\n");
    }

    return 0;
}
