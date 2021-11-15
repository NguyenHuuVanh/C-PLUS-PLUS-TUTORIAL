// // #include <bits/stdc++.h>

// // using namespace std;

// // int main()
// // { int n,s,i,j;
// // bool ok;
// // do
// // {
// // cout<<"nhap n: "; cin>>n;
// // }
// // while (n<=0||n>=50);
// //     for(i=2;i<n;i++)
// //     {
// //         ok=true;
// //        for(j=2;j<=i/2;j++)
// //        if (i%j==0) {ok=false; break;}
// //      if (ok) s=s+i;
// //     }
// //     cout<<"tong cac so nguyen to nho hon n: "<<s<<endl;
// //     return 0;
// // }

// // #include <conio.h>
// // #include <stdio.h>
// // // tinh tong cac so nguyen to nho hon n
// // // dieu` kien n trong khoang 0 < n <50
// // int test(int k)
// // {
// //     int i, test = 1;

// //     for (i = 2; i < k; i++)
// //         if (k % i == 0)
// //             test = 0;
// //     return test;
// // }

// // main()
// // {
// //     int n, s = 0;
// //     printf("\t- Nhap vao gia tri N= ");
// //     scanf("%d", &n);
// //     printf("\t=> Cac so nguyen to be hon N: \n");

// //     for (int i = 2; i <= n; i++)
// //         if (test(i))
// //         {
// //             printf("%6d", i);
// //             s += i;
// //         }
// //     printf("\n\t=> Tong cac so nguyen to be hon N =  %d", s);

// //     getch();
// //     return 0;
// // }

// // #include <stdio.h>
// // #include <stdlib.h>
// // #include <math.h>
// // int main()
// // {
// //     unsigned int n, s, i1;
// //     printf("Nhap so n: ");
// //     scanf("%u", &n);
// //     for (int i = 1; i < n; i++)
// //     {
// //         for (i1 = 1; i1 < i; i1++)
// //         {
// //             if ((i % i1 == 0) && (i1 != 1))
// //             {
// //                 i1 = i + 1;
// //             }
// //         }
// //         if (i1 == i && i != 1)
// //             s += i;
// //     }
// //     printf("Tong cac so nguyen to nho hon %u la : %d", n, s);
// //     return 0;
// // }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int n, i, j, tong = 0;
//     printf("nhap n:");
//     scanf("%d", &n);
//     if (n > 2)
//     {
//         tong = 2;
//     }
//     for (i = 2; i < n; i++)
//     {
//         for (j = 2; j <= i / 2 + 1; j++)
//         {
//             if (i % j == 0)
//             {
//                 break;
//             }
//         }
//         if (j <= i / 2 + 1)
//         {
//             continue;
//         }
//         if (j >= i / 2 + 1)
//         {
//             tong += i;
//         }
//     }
//     printf("Tong la: ", tong);
// }

// #include <stdio.h>
// #include <math.h>
// #include <conio.h>
// int main()
// {
//     int n, i, j, souoc = 0, s = 0;
//     do
//     {
//         printf("Nhap n:");
//         scanf("% d", &n);
//     } while (n <= 0 && n >= 50);

//     for (i = 2; i < n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             if (i % j == 0)
//             {
//                 souoc++;
//             }
//         }
//         if (souoc == 2)
//         {
//             s = s + i;
//         }
//     }
//     printf("Tong cua cac SNT nho hon% d la:% d", n, s);
//     getch();
// }

// #include <stdio.h>
// #include <iostream>
// #include <conio.h>
// using namespace std;
// int main()
// {
//     int n, i, j, S = 0;
//     do
//     {
//         cout << "Nhap n:";
//         cin >> n;
//         if (n <= 0 || n >= 50)
//         {
//             cout << "Moi nhap lai n:" << endl;
//         }
//     } while (n <= 0 || n >= 50);
//     for (i = 2; i < n; i++)
//     {
//         for (j = 2; j <= i / 2 + 1; j++)
//         {
//             if (i % j == 0)
//             {
//                 break;
//             }
//         }
//         if (j >= i / 2 + 1)
//         {
//             S += i;
//         }
//     }
//     cout << "Tong cac so nguyen to nho hon " << n << " la: " << S;
//     getch();
// }

// #include <iostream>
// using namespace std;
// const int Max = 100;
// int static n;
// int static a[Max][Max];
// void nhap()
// {
//     cout << "\nNhap ma tran cap: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << "a[" << i << "][" << j << "]: ";
//             cin >> a[i][j];
//         }
//     }
//     cout << endl;
// }
// void xuat()
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << a[i][j] << "\t";
//         }
//         cout << endl;
//         cout << endl;
//     }
//     cout << endl;
// }
// // x hàng , y cột
// bool Queen(int rightQ, int x, int y)
// { // xét lớn nhất trên hàng qa phía phải!
//     for (int i = y; i <= n; i++)
//     {
//         if (rightQ < a[x][i])
//             return false;
//     }
//     for (int i = y; i >= 1; i--)
//     { // xét lớn nhất trên hàng qa phía trái!
//         if (rightQ < a[x][i])
//             return false;
//     }
//     for (int i = x; i <= n; i++)
//     { // xét lớn nhất trên cột hướng lên trên!
//         if (rightQ < a[i][y])
//             return 0;
//     }
//     for (int i = x; i >= 1; i--)
//     { // xét lớn nhất trên cột hướng xuống dưới!
//         if (rightQ < a[i][y])
//             return 0;
//     }
//     for (int i = x; i >= 1; i--)
//     { // xét lớn nhất trên đường chéo chính, lệch trái!
//         if (rightQ < a[i][i])
//             return 0;
//     }
//     for (int i = x; i <= n; i++)
//     { // xét lớn nhấ đường chéo chính,lệch phải!
//         if (rightQ < a[i][i])
//             return 0;
//     }
//     int tmp = y - 1;
//     for (int i = x; i <= n; i++)
//     {
//         if (rightQ < a[i][tmp])
//             return 0;
//         tmp--;
//     }
//     tmp = x - 1;
//     for (int i = y; i <= n; i++)
//     {
//         if (rightQ < a[tmp][i])
//             return 0;
//         tmp--;
//     }
//     return 1;
// }

// void find_Queen()
// {
//     int flag = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (Queen(a[i][j], i, j))
//             {
//                 cout << "a[" << i << "][" << j << "] la phan tu hoang hau!" << endl;
//                 flag++;
//             }
//         }
//     }
//     if (!flag)
//         cout << "Khong co phan tu hoang hau trong ma tran!" << endl;
//     else
//         cout << "Co " << flag << " phan tu hoang hau trong mang ben!" << endl;
// }
// int main()
// {
//     nhap();
//     xuat();
//     find_Queen();
// }
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, k;
    cout << "Nhap n:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        k = i;
        if (k == n)
        {
            break;
        }
        for (int j = 1; j <= k; j++)
        {
            sum += k;
        }
    }
    cout << sum;
}