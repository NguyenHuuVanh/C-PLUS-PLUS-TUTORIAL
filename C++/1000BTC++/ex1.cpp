// #include <stdio.h>

// int main()
// {
//     int n, c, dem = 0, temp;
//     scanf("%d", &n);

//     temp = n;
//     while (n != 0)
//     {
//         n /= 10;
//         dem++;
//     }

//     int a[dem + 1];
//     for (int i = dem; i > 0; i -= 1)
//     {

//         c = temp % 10;
//         temp /= 10;
//         a[i] = c;
//         if ((i % 2) != (a[i] % 2))
//         {
//             printf("NO");
//             return 0;
//         }
//     }
//     printf("YES");
// }
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
    char str[100];
    int tmp, m = 0, n = 0, p = 0, q = 0, k = 0;
    cout << "Nhap so n:";
    fgets(str, 100, stdin);
    if ((str[k] - 48) % 2 == 0)
    {
        cout << "NO";
        return 0;
    }
    for (int j = 0; j < strlen(str) - 1; j++)
    {
        if ((str[j] - 48) % 2 == 0)
        {
            m++;
        }
        if ((str[j] - 48) % 2 != 0)
        {
            n++;
        }
    }

    for (int i = 0; i < strlen(str); i++)
    {
        int tmp = (int)str[i] - 48;
        if (tmp % 2 != 0)
        {
            if ((tmp % (i + 1) == 0) || (tmp % (i + 1) != 0))
            {
                p++;
            }
        }
        if ((tmp % 2 == 0))
        {
            if ((tmp % (i + 1) == 0) || (tmp % (i + 1) == tmp))
            {
                q++;
            }
        }
    }
    if (p == m && n == q)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
