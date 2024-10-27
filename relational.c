// RELATIONAL OPERATIONS USING C
#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the first digit: ");
    scanf("%d", &x);

    printf("Enter the second digit: ");
    scanf("%d", &y);

    if (x == y) {
        printf("Both digits are equal.\n");
    }
    if (x != y) {
        printf("The digits are not equal.\n");
    }
    if (x > y) {
        printf("%d is greater than %d.\n", x, y);
    }
    if (x < y) {
        printf("%d is less than %d.\n", x, y);
    }
    if (x >= y) {
        printf("%d is greater than or equal to %d.\n", x, y);
    }
    if (x <= y) {
        printf("%d is less than or equal to %d.\n", x, y);
    }

    return 0;
}