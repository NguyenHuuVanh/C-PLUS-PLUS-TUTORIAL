#include <stdio.h>


// Tham số đầu vào là 2 biến con trỏ kiểu int
void swap(int* a, int* b) {
    // dùng * để lấy giá trị của biến mà con trỏ đang trỏ tới
    printf("Ham con, truoc khi goi ham hoan vi, a = %d, b = %d\n", *a, *b);
    // dùng * để lấy giá trị của biến mà con trỏ a đang trỏ tới và gán cho biến `tmp`
    int tmp = *a;
    // sửa giá trị của biến mà con trỏ a đang trỏ tới,
    // bằng giá trị của biến mà con trỏ b đang trỏ tới
    *a = *b;
    // sửa giá trị của biến mà con trỏ a đang trỏ tới,
    // bằng giá trị của của biến con trỏ a đang trỏ tới, đang được lưu trong `tmp`
    *b = tmp;
    // dùng * để lấy giá trị của biến mà con trỏ đang trỏ tới
    printf("Ham con, sau khi goi ham hoan vi, a = %d, b = %d\n", *a, *b);
}

int main() {
    int a = 5, b = 7;
    printf("Ham main, truoc khi goi ham hoan vi, a = %d, b = %d\n", a, b);

    // Do tham số hàm là 2 con trỏ, ta cần truyền vào địa chỉ
    // Dùng & để lấy địa chỉ của biến.
    swap(&a, &b);
    printf("Ham main, sau khi goi ham hoan vi, a = %d, b = %d\n", a, b);
}
