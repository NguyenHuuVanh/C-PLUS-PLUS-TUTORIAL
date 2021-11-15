// #include <iostream>
// #include <string>
// #include <math.h>
// using namespace std;

// // int Sum()
// // {
// //     int s;
// //     for (int i = '*'; i <= str.length(); i++)
// //     {
// //         if (i != '*')
// //         {
// //             s = str[i] + str[i + 1];
// //             static_cast<int>(s);
// //         }
// //     }
// //     return s;
// // }

// int main()
// {

//     int sum = 0;
//     string str;
//     cout << "Nhap chuoi:";
//     cin >> str;
//     for (int i = 0; i <= str.length(); i++)
//     {
//         if (str[i] == '*')
//         {
//             str[i] == str[flag];
//             for (int j = str[flag + 1]; j <= str.length(); j++)
//             {
//                 sum += str[j];
//             }
//             break;
//         }
//     }
//     cout << sum;

//     int a, b, c, d, e = 0, f = 0, s = 0;
//     // cout << "Nhap a= ";
//     // cin >> a;
//     // cout << "Nhap b= ";
//     // cin >> b;
//     // 1*4+1*5+2*4+2*5+3*4+3*5=1*(4+5)+2*(4+5)+3*(4+5)=(1+2+3)*(4+5)=54

//     while (b >= 1)
//     {
//         c = b % 10;
//         b /= 10;
//         e += c;
//     }
//     while (a >= 1)
//     {
//         d = a % 10;
//         a /= 10;
//         f += d;
//     }
//     s = e * f;
//     cout << s;
// }
#include <bits/stdc++.h>
#include <stdlib.h>
#include <string.h>
#include <string>
int main()
{
    char c[20], x;
    printf("Nhap vao 1 chuoi: ");
    cin >> c;
    int a = atoi(c);
    x = strstr(c, " ");
    x = x + 1;
    int sum = 0;
    int b = atoi(x);
    while (a != 0)
    {
        int z = a % 10;
        int g = b;
        do
        {
            sum += z * (g % 10);
            g /= 10;
        } while (g != 0);
        a /= 10;
    }
    printf("%d", sum);
}