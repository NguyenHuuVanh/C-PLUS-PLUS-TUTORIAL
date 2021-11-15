#include <stdio.h>

int Search(int arr[], int n, int x)
{
	
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			return i;
		}
		return -1;
	}
}

int main()
{
	int arr[] = { 2,3,4,66,55,44,33,10 };
	int	n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int result = Search(arr, n,x);
	if (result != -1) 
	{
		printf("%d xuat hien tai chi so %d", x, result);
	}
	else 
	{
		printf("%d khong co trong mang", x);
	}
	return 0;
}