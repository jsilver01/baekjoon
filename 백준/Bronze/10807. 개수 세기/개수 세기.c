#include <stdio.h>
int main() {
	int n;
	int v;
	int array[100];
	int count=0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}
	scanf("%d", &v);

	for (int j = 0; j < n; j++) {
		if (v == array[j]) {
			count++;
		}
	}
	printf("%d", count);

	return 0;
}