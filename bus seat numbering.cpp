#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N >= 1 && N <= 15) { // Lower deck
        if (N % 5 == 0 || N % 5 == 1 || N % 5 == 2) {
            printf("Lower Double
");
        } else {
            printf("Lower Single
");
        }
    } else if (N >= 16 && N <= 30) { // Upper deck
        if ((N-15) % 5 == 0 || (N-15) % 5 == 1 || (N-15) % 5 == 2) {
            printf("Upper Double
");
        } else {
            printf("Upper Single
");
        }
    }

    return 0;
}
