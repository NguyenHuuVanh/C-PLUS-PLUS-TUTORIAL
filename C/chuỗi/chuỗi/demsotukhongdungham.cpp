#include <stdio.h>

int length(char str[])
{
    int i = 0;

    for (; str[i]; i++); // for(int i = 0; str[i] != '\0'; i++){}
    // same as
    return i;
}

int main() {
    char str[100];
    printf("\nNhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    printf("Length = %d", length(str)-1);
}