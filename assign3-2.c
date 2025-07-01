//Write a program, which accepts two integers and an operator as a character (+ - * /), performs the corresponding operation and displays the result
#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Accept input from user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op); 
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Perform operation based on operator
    switch (op) {
        case '+':
            printf("Result = %d\n", num1 + num2);
            break;
        case '-':
            printf("Result = %d\n", num1 - num2);
            break;
        case '*':
            printf("Result = %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result = %.2f\n", (float)num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}



















