#include <stdio.h>

int main() {
    int X, Y;
    
    // Read number of students and existing chairs
    scanf("%d %d", &X, &Y);
    
    int extraChairs = X - Y;
    
    // If extraChairs is negative, no need to buy chairs
    if (extraChairs < 0) {
        extraChairs = 0;
    }
    
    printf("%d
", extraChairs);
    
    return 0;
}

