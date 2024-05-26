#include <stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int cnt = 1;
	for (int i = 0; i < 6; i++) {
		if (a % (cnt * 10) / cnt==5) {
			a += cnt;
		}
		if (b % (cnt * 10) / cnt == 5) {
			b += cnt;
		}
		cnt *= 10;
	}
	int max = a + b;
	cnt = 1;
	for (int i = 0; i < 6; i++) {
		if (a % (cnt * 10) / cnt == 6) {
			a -= cnt;
		}
		if (b % (cnt * 10) / cnt == 6) {
			b -= cnt;
		}
		cnt *= 10;
	}
	int min = a + b;

	printf("%d %d", min, max);
    return 0;
}