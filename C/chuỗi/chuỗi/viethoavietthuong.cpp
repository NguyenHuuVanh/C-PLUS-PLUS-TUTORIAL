#include <stdio.h>
#include <string.h>
//Chuyển chuỗi nhập từ bàn phím thành chữ viết hoa, viết thường và viết hoa mỗi chữ cái đầu mỗi từ.

int main()
{
	char str[100];
	printf("\nNhap chuoi:");
	fgets(str, sizeof(str), stdin);
	printf("\nChuoi vua nhap la %s", str);
	_strupr(str);
	printf("\nChuoi sau khi viet hoa la %s", str);
	_strlwr(str);
	printf("\nChuoi sau khi viet thuong la %s", str);
}