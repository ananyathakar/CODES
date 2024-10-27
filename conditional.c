// CONDITIONAL OPERATIONS USING C
#include <stdio.h>

int main() {
    int q;

    
    printf("Input any number: ");
    scanf("%d", &q);

    
    const char* result = (q % 2 == 0) ? "Even" : "Odd";

   
    printf("Your number is: %s\n", result);

    return 0;
}