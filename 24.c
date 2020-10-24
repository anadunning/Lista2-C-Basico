#include <stdio.h>
#include <string.h>

int main(){

    double price;
    char state[3];

    printf("Inform the price of a product: \n");
    scanf("%lf", &price);

    printf("Inform the state: \n");
    scanf("%s", state);

    if (strcmp(state, "MG") == 0) {
        printf("Final price added tax: %.2lf\n", price + (price * 0.07));
    }
    else if (strcmp(state, "SP") == 0) {
        printf("Final price added tax: %.2lf\n", price + (price * 0.12));
    }
    else if (strcmp(state, "RJ") == 0) {
        printf("Final price added tax: %.2lf\n", price + (price * 0.15));
    }
    else if (strcmp(state, "MS") == 0) {
        printf("Final price added tax: %.2lf\n", price + (price * 0.08));
    }
    else {
        printf("Invalid state option!\n");
    }

    return 0;
}
