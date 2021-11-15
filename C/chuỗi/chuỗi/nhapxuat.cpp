#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    printf("name is:");
    puts(name);
    return 0;
}