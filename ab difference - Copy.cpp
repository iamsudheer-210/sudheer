#include <stdio.h>
#include <stdlib.h> // for abs()

int main() {
    int A, B;
    
    // Read two integers
    scanf("%d %d", &A, &B);
    
    // Correct answer (sum) and Vijay's output (product)
    int sum = A + B;
    int product = A * B;
    
    // Calculate absolute difference
    int diff = abs(sum - product);
    
    // Print the result
    printf("%d
", diff);
    
    return 0;
}
