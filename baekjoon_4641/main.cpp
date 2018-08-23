#include <cstdio>

int n[15], c, i;
int main() {
	while (1) {
		while (scanf_s("%d", &n[i++])) {
			if (n[0] == -1) return 0;
			else if (!n[i - 1]) break;
		}
		for (int j = 0; j < i-1; j++) {
			for (int k = 0; k < i-1; k++) {
				if (n[j] * 2 == n[k]) {
					c++;
					break;
				}
			}
		}
		printf("%d\n", c);
		c = 0; i = 0;
	}
	return 0;
}