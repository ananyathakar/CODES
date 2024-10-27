// TERNARY OPERATION USING C
#include <stdio.h>

int main() {
    int x, y, least;

    
    printf("Enter the 1st digit: ");
    scanf("%d", &x);

    printf("Enter the 2nd digit: ");
    scanf("%d", &y);

    
    least = (x < y) ? x : y;

    
    printf("The least digit is: %d\n", least);

    return 0;
}