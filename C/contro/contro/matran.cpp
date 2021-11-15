#include <stdio.h>
#include <stdlib.h>

void NhapMaTran(int** a, int dong, int cot)
{
    int i, j;
    for (i = 0; i < dong; i++)
        for (j = 0; j < cot; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf_s("%d", &a[i][j]);
        }
}
void XuatMaTran(int** a, int dong, int cot)
{
    int i, j;
    for (i = 0; i < dong; i++)
    {
        for (j = 0; j < cot; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
}
int main()
{
    int** a = NULL, dong, cot;
    int i;
    printf("Nhap vao so dong = ");
    scanf_s("%d", &dong);
    printf("Nhap vao so cot = ");
    scanf_s("%d", &cot);
    // Cấp phát mảng các con trỏ cấp 1
    a = (int**)malloc(dong * sizeof(int*));
    for (i = 0; i < dong; i++)
    {
        // Cấp phát cho từng con trỏ cấp 1
        a[i] = (int*)malloc(cot * sizeof(int));
    }
    NhapMaTran(a, dong, cot);
    XuatMaTran(a, dong, cot);

    // giải phóng từng hàng
    for (i = 0; i < dong; i++)
    {
        free(a[i]);
    }
    // giai phong con trỏ quản lý các dòng
    free(a);
    return 0;
}