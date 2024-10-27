// ARITHMETIC OPERATIONS USING C
#include <stdio.h>

int main() {
    float x, y;
    char OP;

    // Taking input from the user
    printf("Enter the first number: ");
    scanf("%f", &x);
    printf("Enter the second number: ");
    scanf("%f", &y);

    // Displaying arithmetic options
    printf("Choose an operator (+, -, *, /): ");
    scanf(" %c", &OP);

    // Performing the chosen operation
    switch (OP) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", x, y, x + y);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", x, y, x - y);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", x, y, x * y);
            break;
        case '/':
            if (y!= 0) {
                printf("%.2f / %.2f = %.2f\n", x, y, x / y);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("INVALID TERM.\n");
            break;
    }

    return 0;
}