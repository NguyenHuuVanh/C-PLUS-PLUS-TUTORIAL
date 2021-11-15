#include <stdio.h>
#define MAX 1000

void NhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap so thu %d: ", i);
        scanf_s("%d", &a[i]);
    }
}

void XuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%4d", a[i]);
    }
}

void ThemPhanTu(int a[], int& n, int val, int pos) {
    // Mang da day, khong the them.
    if (n >= MAX) {
        return;
    }
    // Neu pos <= 0 => Them vao dau
    if (pos < 0) {
        pos = 0;
    }
    // Neu pos >= n => Them vao cuoi
    else if (pos > n) {
        pos = n;
    }
    // Dich chuyen mang de tao o trong truoc khi them.
    for (int i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }
    // Chen val tai pos
    a[pos] = val;
    // Tang so luong phan tu sau khi chen.
    ++n;
}

void XoaPhanTu(int a[], int& n, int pos) {
    // Mang rong, khong the xoa.
    if (n <= 0) {
        return;
    }
    // Neu pos <= 0 => Xoa dau
    if (pos < 0) {
        pos = 0;
    }
    // Neu pos >= n => Xoa cuoi
    else if (pos >= n) {
        pos = n - 1;
    }
    // Dich chuyen mang
    for (int i = pos; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    // Giam so luong phan tu sau khi xoa.
    --n;
}

int main() {
    int a[MAX];
    int n;
    printf("\nNhap so luong phan tu: ");
    scanf_s("%d", &n);
    NhapMang(a, n);
    XuatMang(a, n);
    printf("\n=======THEM PHAN TU======\n");
    int val, pos;
    printf("\nNhap so can them: ");
    scanf_s("%d", &val);
    printf("\nNhap vi tri muon chen: ");
    scanf_s("%d", &pos);
    ThemPhanTu(a, n, val, pos);
    printf("\nMang sau khi them: ");
    XuatMang(a, n);
    printf("\n=======XOA PHAN TU======\n");
    printf("\nNhap vi tri muon xoa: ");
    scanf_s("%d", &pos);
    XoaPhanTu(a, n, pos);
    printf("\nMang sau khi xoa: ");
    XuatMang(a, n);
    printf("\nDone!");
}