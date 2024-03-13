#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // 숫자의 개수 입력 받기

    int numbers[n]; // 입력 받은 숫자들을 저장할 배열 생성

    // 숫자 입력 받기
    for (int i = 0; i < n; ++i) {
        scanf("%d", &numbers[i]);
    }

    // 최소값과 최대값 초기화
    int min_value = numbers[0];
    int max_value = numbers[0];

    // 최소값과 최대값 찾기
    for (int i = 1; i < n; ++i) {
        if (numbers[i] < min_value) {
            min_value = numbers[i];
        }
        if (numbers[i] > max_value) {
            max_value = numbers[i];
        }
    }

    // 결과 출력
    printf("%d %d\n", min_value, max_value);

    return 0;
}