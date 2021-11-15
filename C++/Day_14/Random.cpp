#include <iostream>
#include <cstdlib>
#include <random>
using namespace std;

int main()
{
    // random_device rd;
    // mt19937 rng(rd());
    // uniform_int_distribution<int> uni(1, 100);
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << uni(rng) << "\t";
    // }
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        cout << rand() % 10 + 1 << "\t";
    }
}