#include <stdio.h>
#include <math.h>

int OctToDec(int Number)
{
	int p = 0;
	int DecNumber = 0;
	while (Number>0)
	{
		DecNumber += (Number % 10) * pow(8, p);
		p++;
		Number /= 10;
	}
	return DecNumber;
}
int main()
{
	int OctNumber;
	printf("Nhap co so 8:");
	scanf_s("%d", &OctNumber);

	printf("Oct=%d", OctToDec(OctNumber));
}