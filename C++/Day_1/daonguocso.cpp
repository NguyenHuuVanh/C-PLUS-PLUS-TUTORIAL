#include <stdio.h>

void Reverse()
{
    char c;
    scanf_s("%c", &c);
    if (c != '\n')
    {
        Reverse();
        printf("%c", c);
    }
}

int main()
{
    printf("Nhap chuoi ky tu tu ban phim:");
    Reverse();
}