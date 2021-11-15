#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5 };
	printf("\nDia chi cua mang arr=%d", &arr);
	printf("\nGia chi cua mang arr=%d", arr);

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("\nDia chi cua arr[%d] = %d\n", i, &arr[i]);
	}

}