#include <stdio.h>

int main()
{
	int arr[100];
	for (int i = 1; i < 100; i++)
	{
		arr[i] = i;
	}
	for (int i = 1; i < 100; i++)
	{
		printf("\tarr[%d]=%d", i, arr[i]);
	}
}