#include <stdio.h>

int main() {
    int num1, num2;             //Initializes 2 int variables
    char op;                    //Initializes 1 char variable

    printf("Enter 1st operand: ");
    scanf("%d", &num1);         //Gets user input and stores as the address for num1
    printf("Enter operation: ");
    scanf("%s", &op);           //Gets user input and stores as the address for operator
    if (op != 's') {            //Checks if operand is squared
        printf("Enter 2nd operand: ");
        scanf("%d", &num2);             //Gets user input and stores as the address for num2
    }

    switch (op) {       //
        case '+':
            printf("%d", num1 + num2);
            break;
        case '-':
            printf("%d", num1 - num2);
            break;
        case '*':
            printf("%d", num1 * num2);
            break;
        case '/':
            printf("%d", num1 / num2);
            break;
        case 's':
            printf("%d", num1 * num1);
            break;
    }


    return 0;
}