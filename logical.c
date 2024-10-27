// LOGICAL OPERATIONS USING C
#include <stdio.h>

int main() {
    int a, b;

    // Input two digits by the user
    printf("input the 1st digit: ");
    scanf("%d", &a);

    printf("input the 2nd digit: ");
    scanf("%d", &b);

    // prohtam for logical AND
    if (a > 0 && b > 0) {
        printf("Both numbers are positive.\n");
    } else {
        printf("At least one number is not positive.\n");
    }

    // prohtam for logical OR
    if (a < 0 || b < 0) {
        printf("At least one number is negative.\n");
    } else {
        printf("Both numbers are non-negative.\n");
    }

    // prohtam for logical NOT
    if (!(a == 0)) {
        printf("The 1st number is not zero.\n");
    } else {
        printf("The 1st number is zero.\n");
    }

    return 0;
}