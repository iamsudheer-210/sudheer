#include <stdio.h>

int main() {
    int total_classes, attended;
    scanf("%d %d", &total_classes, &attended);

    // Check if attendance is at least 75%
    if (attended * 100 >= 75 * total_classes) {
        printf("ELIGIBLE
");
    } else {
        printf("NOT ELIGIBLE
");
    }

    return 0;
}
