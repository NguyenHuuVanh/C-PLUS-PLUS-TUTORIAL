#include <stdio.h>

int main()
{
    // Khai báo mảng có 5 phần tử
    int arr[] = { 1, 2, 3, 4, 5 };
    // Thử in địa chỉ của từng phần tử
    // sizeof (arr): Kích thước của mảng
    // sizeof (int): Kích thước của kiểu int
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("Dia chi cua arr[%d] = %d\n", i, &arr[i]);
    }

    printf("\n___________________________\n");

    // Gán con trỏ p cho phần tử đầu tiên của mảng
    int* p = &arr[0];

    // Lấy giá trị của con trỏ p
    printf("Gia tri cua con tro p = %d\n", p);
    // Lấy giá trị của địa chỉ mà p đang trỏ đến
    printf("Gia tri cua dia chi ma p dang tro den = %d\n", *p);

    // Toán tử tăng trên con trỏ
    p++; // hoặc p = p + 1;
    // Lấy giá trị của con trỏ p
    printf("Gia tri cua con tro p = %d\n", p);
    // Lấy giá trị của địa chỉ mà p đang trỏ đến
    printf("Gia tri cua dia chi ma p dang tro den = %d\n", *p);

    // Toán tử tăng trên con trỏ
    p += 2; // hoặc p = p + 2;
    // Lấy giá trị của con trỏ p
    printf("Gia tri cua con tro p = %d\n", p);
    // Lấy giá trị của địa chỉ mà p đang trỏ đến
    printf("Gia tri cua dia chi ma p dang tro den = %d\n", *p);

    // Toán tử giảm trên con trỏ
    p--; // hoặc p = p - 1;
    // Lấy giá trị của con trỏ p
    printf("Gia tri cua con tro p = %d\n", p);
    // Lấy giá trị của địa chỉ mà p đang trỏ đến
    printf("Gia tri cua dia chi ma p dang tro den = %d\n", *p);
}