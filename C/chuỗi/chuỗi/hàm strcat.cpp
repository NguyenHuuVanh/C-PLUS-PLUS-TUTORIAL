#include <stdio.h>
#include <string.h>

int main()
{
	char s[100];
	strcat(s, "Nguyen");
	strcat(s, "Huu");
	strcat(s, "Viet");
	strcat(s, "Anh");
	printf("%s", s);
	return 0;
}