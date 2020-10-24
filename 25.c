#include <stdio.h>

int main(){

    int a, b, c, delta, result1, result2;

    printf("Inform values for the variables a, b and c: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0) {
        printf("It's not an equation of degree 2.\n");
    }
    else {
        delta = (b * b) - 4 * a * c;

        if (delta < 0) {
            printf("There are no real solutions.\n");
        }
        else if (delta > 0) {
            printf("There are two real solutions.\n");

            result1 = (-b + delta) / 2 * a;
            result2 = (-b - delta) / 2 * a;

            printf("Solution 1: %d\n", result1);
            printf("Solution 2: %d\n", result2);
        }
        else if (delta == 0) {
            result1 = (-b) / 2 * a;
            printf("Solution 1 e 2: %d\n", result1);
        }
    }

    return 0;
}
