#include <stdio.h>

void nhapGioPhut(int gio, int phut)
{

    printf("Nhap gio: ");
    scanf("%d", &gio);
    printf("Nhap phut:");
    scanf("%d", &phut);
}

int hopLe(int gio, int phut)
{
    int flag = 0;
    if (0 <= gio <= 23 && 0 <= phut <= 59)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    printf("%d", flag);
    return flag;
}

int main()
{
    int gio, phut;
    nhapGioPhut(gio, phut);
    hopLe(gio, phut);
}