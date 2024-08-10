#include <stdio.h>

// Function to perform the calculation
double calculate(double num1, double num2, char operator) {
    double result;
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error! Division by zero.\n");
                return 0;
            }
            break;
        default:
            printf("Error! Operator is not correct.\n");
            return 0;
    }
    return result;
}

int main() {
    char operator;
    double num1, num2, result;

    // Read the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Read the two numbers
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform the calculation
    result = calculate(num1, num2, operator);

    // Display the result
    printf("Result: %.2lf\n", result);

    return 0;
}
