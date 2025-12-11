#include <stdio.h>

int main() {
    int X, A, B;
    scanf("%d %d %d", &X, &A, &B);

    int total_points = A * 1 + B * 2;  // Easy problems = 1 point, Hard problems = 2 points

    if (total_points >= X)
        printf("Qualify");
    else
        printf("Not Qualify");

    return 0;
}
