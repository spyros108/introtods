#include <stdio.h>

// Collaborator: SPYRIDON BARDAS
int main() {
    int num1, num2, sum;

    // Prompting user for input
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
     // i put a question mark in the end of scan
    scanf("%d", &num2);

    // Calculating summary of numbers
     // to calculate the summary of some numbers we need the symbol + instead of *
    sum = num1 + num2;

    // Printing the result
     // num1 num2 are integers i put %d instead of %s
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    // i put a question mark in the end of return 0 because it was missing
    return 0;
}
