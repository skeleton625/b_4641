#include <iostream>
#include <algorithm>
using namespace std;

int n[15] = { 1 }, i, c;
int main() {
	while (1) {
		scanf_s("%d", &n[0]);
		if (n[0] == -1) break;
		for (i = 1; n[i-1] != 0; i++) scanf_s("%d", &n[i]);
		sort(n, n+i);
		for (int j = 1; j <= i; j++) {
			for (int k = i; k > j; k--) { 
				if( n[j]*2 == n[k]) {
					c++;
					break;
				}
			}
		}
		cout << c << endl;
		c = 0;
	}
	return 0;
}