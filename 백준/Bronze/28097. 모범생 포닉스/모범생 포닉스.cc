#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int study[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &study[i]);
    }

    int rest = (N - 1) * 8;
    int result = rest;

    for (int i = 0; i < N; i++) {
        result += study[i];
    }

    int days = result / 24;
    int hours = result % 24;

    printf("%d %d\n", days, hours);

    return 0;
}
