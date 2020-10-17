#include <stdio.h>

// Leia o salario de um trabalhador e
// o valor da prestacao de um emprestimo.
// Se a prestacao for maior que 20% do salario,
// imprima: Emprestimo nao concedido, caso
// contrario imprima: Emprestimo concedido.

int main(){

    double salary, installment;

    printf("Inform the employee's salary: \n");
    scanf("%lf", &salary);

    printf("Inform the loan's installment: \n");
    scanf("%lf", &installment);

    if (installment > salary * 0.20) {
        printf("Loan not granted.\n");
    }
    else {
        printf("Loan granted.\n");
    }

    return 0;
}
