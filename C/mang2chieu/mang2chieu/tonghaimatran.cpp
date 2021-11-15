#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10];
    int i, j, m, n;
    printf("nhap so hang n="); scanf_s("%d", &n);
    printf("nhap so cot m="); scanf_s("%d", &m);
    printf("nhap vao ma tran:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf_s("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf_s("%d", &b[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nMa tran sau cong:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%5d", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}