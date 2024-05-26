#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if (N % 7 == 0 || N % 7 == 2) {
        printf("CY\n");
    } else {
        printf("SK\n");
    }
    return 0;
}
