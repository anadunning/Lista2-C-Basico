#include <stdio.h>

int main(){

    int op, a, b;

    printf("Choose an option: \n\n");
    printf("1 - Sum of 2 numbers: \n");
    printf("2 - Diference between 2 numbers (major less minor): \n");
    printf("3 - Product between 2 numbers: \n");
    printf("4 - Division between 2 numbers (denominator cannot be zero): \n");
    printf("Option: ");

    scanf("%d", &op);

    switch(op) {

    case 1:
        printf("\nInform two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Sum of %d + %d: %d\n", a, b, a + b);
        break;

    case 2:
        printf("\nInform two numbers: ");
        scanf("%d %d", &a, &b);

        if (a > b) {
            printf("Diference between %d and %d: %d\n", a, b, a - b);
        }
        else {
            printf("Diference between %d and %d: %d\n", b, a, b - a);
        }
        break;

    case 3:
        printf("\nInform two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Product of %d * %d: %d\n", a, b, a * b);
        break;

    case 4:
        printf("\nInform first number, dividend: ");
        scanf("%d", &a);

        printf("\nInform second number, divisor (It cannot be zero): ");
        scanf("%d", &b);

        if (b == 0) {
            printf("\nThe divisor cannot be zero!!!\n");
            printf("Program ended!\n");
            break;
        }

        printf("Division of %d / %d: %d\n", a, b, a / b);
        break;

    default:
        printf("Invalid option!\n");

    }

    return 0;
}
