#include <stdio.h>
#include <stdlib.h>

struct Person
{
    char firstname[30];
	char lastname[30];
	int Tuoi;
};

int main()
{
	struct Person person1;
	printf("Nhap du lieu:\n");
	printf("Nhap First name:");
	fgets(person1.firstname, sizeof(person1.firstname), stdin);
	printf("Nhap Last name:");
	fgets(person1.lastname, sizeof(person1.lastname), stdin);
	printf("\nNhap tuoi:");
	scanf_s("%d", &person1.Tuoi);

	printf("\n--------------PERSON INFORMATIONS---------------\n");
	printf("First name: %s\nLast name: %s\nAge: %d", person1.firstname, person1.lastname, person1.Tuoi);
}