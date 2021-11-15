#include <stdio.h>      
#include <string.h>

int main()
{
	char s[100];
	printf("\nNhap chuoi:");
	fgets(s, sizeof(s), stdin);
	printf("do dai chuoi la %d", strlen(s)-1);

}