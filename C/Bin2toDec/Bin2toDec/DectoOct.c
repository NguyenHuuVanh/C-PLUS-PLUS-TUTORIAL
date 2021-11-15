#include <stdio.h>
#include <math.h>

int DecToOct(int Number)
{
	int p = 0;
	int OctNumber = 0;
	while (Number>0)
	{
		OctNumber += (Number%8) * pow(10, p);
		p++;
		Number /= 8;
	}
	return OctNumber;
}
	

int main()
{
	int DecimalNumber;
	printf("Nhap so thap phan:");
	scanf_s("%d", &DecimalNumber);

	printf("Oct=%d", DecToOct(DecimalNumber));
}