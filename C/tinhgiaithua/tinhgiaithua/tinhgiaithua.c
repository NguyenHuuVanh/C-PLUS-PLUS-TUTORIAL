#include <stdio.h>

int main(){
	int n, giaithua=1;
	printf("\nNhap n!:"); scanf_s("%d", &n);

	for (int i = n; i >= 1; i--) {
		giaithua *= i;
	}
	printf("\t%d!=%d\n", n, giaithua);
	return 0;
}