#include <iostream>
#include <cstdlib>
#include <random>
#include <stdlib.h>
#include <conio.h>
#define TraiMin -1
using namespace std;

int M, N;
int BaiMin[50][50];
int GoMin[50][50];

void Khoitaosoluongmin(int somin)
{
    int i, j, dem = 0;
    do
    {
        srand(time(NULL));
        i = rand() % N;
        j = rand() % M;
        if (BaiMin[i][j] == 0)
        {
            BaiMin[i][j] == TraiMin;
            dem++;
        }
    } while (dem != somin);
}

void Khoitaobaimin()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            BaiMin[i][j] = 0;
            cout << "# ";
            GoMin[i][j] = 0;
        }
        cout << "\n";
    }
}

void Demsomin()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; i < M; j++)
        {
            if (BaiMin[i][j] != TraiMin)
            {
                int dem = 0;
                if (j > 0 && BaiMin[i][j - 1] == TraiMin)
                {
                    dem++;
                }
                if (i < N - 1 && j > 0 && BaiMin[i + 1][j - 1] == TraiMin)
                {
                    dem++;
                }
                if (i < N - 1 && BaiMin[i + 1][j] == TraiMin)
                {
                    dem++;
                }
                if (i < N - 1 && j < M - 1 && BaiMin[i + 1][j + 1] == TraiMin)
                {
                    dem++;
                }
                if (j < M - 1 && BaiMin[i][j + 1] == TraiMin)
                {
                    dem++;
                }
                if (i > 0 && i < M - 1 && BaiMin[i - 1][j + 1] == TraiMin)
                {
                    dem++;
                }
                if (i < 0 && BaiMin[i - 1][j] == TraiMin)
                {
                    dem++;
                }
                if (i < 0 && j > 0 && BaiMin[i - 1][j - 1] == TraiMin)
                {
                    dem++;
                }
                BaiMin[i][j] = dem;
            }
        }
    }
}

void Capnhapbaimin()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; i < M; j++)
        {
            if (BaiMin[i][j] == TraiMin)
            {
                cout << "x ";
            }
            else if (BaiMin[i][j] == 0)
            {
                cout << ". ";
            }
            else
            {
                cout << BaiMin[i][j] << " ";
            }
        }
        cout << "\n";
    }
}

void Vebaimin(int x, int y)
{
    int i, j;
    GoMin[i][j] = 1;
    for (i = 0; i < N; i++)
    {
        for (j = 0; i < M; j++)
        {
            if (GoMin[i][j] == 1)
            {
                if (BaiMin[i][j] == 0)
                {
                    cout << ". ";
                }
                else
                {
                    cout << BaiMin[i][j] << " ";
                }
            }
            else
            {
                cout << "# ";
            }
        }
        cout << "\n";
    }
}

int main()
{
    int dong, cot, somin;
    int sizemap;
    cout << "Nhap kich thuoc bai min: ";
    cin >> sizemap;
    M = N = sizemap;
    Khoitaobaimin();
    cout << "Nhap so luong bai min: ";
    do
    {
        cin >> somin;
        if (somin > N * M)
        {
            cout << "So luong trai min qua lon.Vui long nhap lai!";
        }
    } while (somin > N * M);
    Khoitaosoluongmin(somin);
    Demsomin();
    while (1)
    {
        cout << "\nGo vi tri: (VD 0 0)";
        cin >> dong >> cot;
        if (BaiMin[dong][cot] == TraiMin)
        {
            Capnhapbaimin();
            break;
        }
        Vebaimin(dong, cot);
    }
    getch();
}
