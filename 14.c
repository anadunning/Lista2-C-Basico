#include <stdio.h>

// A nota final de um estudante eh calculada
// a partir de tres notas atribuıdas entre
// o intervalo de 0 ate 10, respectivamente,
// a um trabalho de laboratorio, a uma avaliacao semestral
// e a um exame final. A media das tres notas mencionadas
// anteriormente obedece aos pesos: Trabalho de Laboratorio: 2;
// Avaliacao Semestral: 3; Exame Final: 5.
// De acordo com o resultado, mostre na tela se
// o aluno esta reprovado (media entre 0 e 2,9),
// de recuperacao (entre 3 e 4,9) ou se foi aprovado.
// Faca todas as verificacoes necessarias.

int main(){

    double tl, as, ef, avg;

    printf("Inform the three grades: \n");
    scanf("%lf", &tl);
    scanf("%lf", &as);
    scanf("%lf", &ef);

    avg = ((tl * 2) + (as * 3) + (ef * 5)) / 10;
    printf("Average: %.1lf\n", avg);

    if (avg > 0 && avg <= 2.9) {
        printf("Fail\n");
    }
    else if (avg > 3 && avg <= 4.9) {
        printf("Second attempt\n");
    }
    else {
        printf("Pass\n");
    }

    return 0;
}
