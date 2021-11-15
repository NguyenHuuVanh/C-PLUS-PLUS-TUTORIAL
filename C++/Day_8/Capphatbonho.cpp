#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a = 5;
    // allocate memory of int size to an int pointer
    int *ptr = (int *)malloc(sizeof(int));

    // assign the value 5 to allocated memory
    ptr = &a;

    cout << *ptr;
    free(ptr);
    return 0;
}