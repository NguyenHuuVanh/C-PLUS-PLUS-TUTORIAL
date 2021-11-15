#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct Person
{
	char FullName[30];
	char Address[50];
	int age;
	int weight;
	int height;
};

int main()
{
	struct Person *personPtr, person1;
	personPtr = &person1;
	printf("Enter Fullname: ");
	fgets(personPtr->FullName, sizeof(personPtr->FullName), stdin);
	printf("Enter Address: ");
	fgets(personPtr->Address, sizeof(personPtr->Address), stdin);
	printf("Enter Age: ");
	scanf_s("%d", &personPtr->age);
	printf("Enter Height: ");
	scanf_s("%d", &personPtr->height);
	printf("Enter Height: ");
	scanf_s("%d", &personPtr->weight);

	printf("\n------------------PERSON INFOMATIONS------------------\n");
	printf("\nFullname: %s \nAddress: %s", personPtr->FullName,personPtr->Address);
	printf("\nAge: %d\n\nHeight: %d\n", personPtr->age, personPtr->height);
	printf("\nWeight: %d\n", personPtr->weight);
	return 0;
}