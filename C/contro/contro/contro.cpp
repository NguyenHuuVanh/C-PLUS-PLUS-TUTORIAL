#include <stdio.h>
int main()
{
	// Khai báo + khởi tạo biến value = 10
	int value = 10;

	// Lấy giá trị của biến value
	printf("\nGia tri cua `value` = %d", value);
	// Lấy địa chỉ của biến value
	printf("\nDia tri cua `value` = %d", &value);

	printf("\n-------------------\n");

	/*
	Khai báo + khởi tạo biến con trỏ p
	có giá trị là địa chỉ của biến value
	*/
	int* p = &value;

	// Lấy giá trị của con trỏ p
	printf("\nGia tri cua con tro `p` = %d", p);
	// Lấy địa chỉ của con trỏ p
	printf("\nDia tri cua con tro `p` = %d", &p);
	// Lấy giá trị của biến ma con trỏ p đang trỏ tới dùng toán tử *
	printf("\nGia tri cua bien ma con tro `p` dang tro toi = %d", *p);

	printf("\n-------------------\n");

	/*
	Thay đổi giá trị của biến value thông qua con trỏ p
	Giống như hàm scanf() có thể thay đổi giá trị của biến khi nhận vào địa chỉ,
	con trỏ khi có địa chỉ của 1 biến hoàn toàn có thể thay đổi giá trị của
	biến đó theo cách dưới đây:
	*/
	// Lấy giá trị của biến value
	printf("\nGia tri cua `value` = %d", value);
	// Thay đổi giá trị của biến value thông qua `p`
	*p = 100;
	// Lấy giá trị của biến value
	printf("\nGia tri cua `value` = %d", value);
	// Lấy giá trị của biến ma con trỏ p đang trỏ tới dùng toán tử *
	printf("\nGia tri cua bien ma con tro `p` dang tro toi = %d", *p);

	printf("\n-------------------\n");

	/*
	Việc lấy giá trị của biến thông qua con trỏ
	chỉ là 1 cách khác để lấy được giá trị của biến đó.

	*/
	value = 1000;
	// Lấy giá trị của biến value
	printf("\nGia tri cua `value` = %d", value);
	// Lấy giá trị của biến ma con trỏ p đang trỏ tới dùng toán tử *
	printf("\nGia tri cua bien ma con tro `p` dang tro toi = %d", *p);
}