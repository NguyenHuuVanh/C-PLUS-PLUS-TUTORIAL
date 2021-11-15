#include<stdio.h>
int main() {
	int m, n;
	printf("Nhap n:"); scanf_s("%d", &n);
	printf("Nhap m:"); scanf_s("%d", &m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < m; j++) {
			printf(" * ");
		}
		printf(" *\n");
	}
	return 0;
}