#include <stdio.h>

int main(){

    int age, timeWorked;

    printf("Inform the person's age: \n");
    scanf("%d", &age);

    printf("Time worked in years: \n");
    scanf("%d", &timeWorked);

    if ((age >= 65) || (age >= 60 && timeWorked >= 25) || (timeWorked >= 30)) {
        printf("You CAN retire!\n");
    }
    else {
        printf("You CANNOT retire!\n");
    }

    return 0;
}
