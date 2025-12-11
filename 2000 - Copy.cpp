#include <stdio.h>

int main() {
    int N;
    
    // Read the number of Rs.2000 notes
    scanf("%d", &N);
    
    // Total amount = N * 2000
    // Number of Rs.500 notes = total amount / 500 = N * 2000 / 500 = N * 4
    int notes500 = N * 4;
    
    // Print the result
    printf("%d
", notes500);
    
    return 0;
}
