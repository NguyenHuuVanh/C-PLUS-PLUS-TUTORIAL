#include <stdio.h>
#include <string.h>

char Check(char str[], char n)
{
	int count = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == n)
		{
			count++;
		}
	}

	if (count > 0)
	{
		printf("\nki tu %c xuat hien trong chuoi %d lan!", n, count);
	}

	if (count == 0)
	{
		return 0;
	}
}

int main()
{
	char str[100], n;
	printf("\nNhap chuoi:");
	fgets(str, sizeof(str), stdin);
	printf("\nChuoi vua nhap la %s", str);
	printf("\nxin moi ban nhap vao ki tu can dem\n");
	scanf_s("%c", &n);

	if (Check(str, n) == 0)
	{
		printf("\nki tu %c khong co trong chuoi\n", n);
	}
}