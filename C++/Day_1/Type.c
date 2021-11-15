#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    char c;
    printf("Nhap ki tu tu ban phim:");
    scanf("%c", &c);
    printf("Ki tu duoc nhap la %c\n", c + 5);

    int n;
    printf("Nhap so nguyen tu ban phim:");
    scanf("%d", &n);
    printf("so nguyen duoc nhap la %d\n", (n * 9) + 5);

    float f;
    printf("Nhap so thuc tu ban phim: ");
    scanf("%f", &f);
    printf("So thuc duoc nhap la %f\n", f / 5);
}