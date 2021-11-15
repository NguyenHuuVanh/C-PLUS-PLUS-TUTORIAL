#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, * ptr, sum = 0;
	printf("\nNhap so luong phan tu:");
	scanf_s("%d", &n);
	ptr = (int*)malloc(n * sizeof(int));

	if (ptr == NULL)
	{
		printf("Co loi! khong the cap phat bo nho.");
		exit(0);
	}
	printf("\nNhap cac gia tri:");
	
		for (int i = 0; i < n; i++)
		{
			scanf_s("%d", ptr + i);
			sum += *(ptr+i);
		}
	printf("\nTong=%d", sum);
	free(ptr);
}