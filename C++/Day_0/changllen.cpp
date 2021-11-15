#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

int main()
{
    // VD:N=234 và K=3 thì N là sô may mắn vì N có tổng các chứ số là M=2+3+4=9 chia hết cho 3
    fstream Bai2_inp, Bai2_out;
    Bai2_inp.open("C:\\Users\\Administrator\\Documents\\Bai2_inp.TXT", ios::out);
    int K, P, Q, SumN = 0, count = 0, countN = 0;
    do
    {
        cout << "K: ";
        cin >> K;
    } while ((K <= 1 && K > 82));

    do
    {
        cout << "Nhap P va Q:";
        cin >> P >> Q;
    } while (P <= 0 && (Q <= P && Q > 2 * pow(10, 9)));

    if (Bai2_inp.is_open())
    {
        cout << "Doc file input thanh cong!" << endl;
    }
    else
    {
        cout << "Doc file input that bai!" << endl;
    }
    Bai2_inp << P << " " << Q << " " << K;
    for (int i = P; i <= Q; i++)
    {
        int S = i % 10;
        SumN += S;
        i /= 10;
        // if (i != 0)
        // {
        //     SumN += i;
        // }
        while (i != 0)
        {
            S = i % 10;
            SumN += S;
            i /= 10;
        }

        countN++;
        if (SumN % K == 0)
        {
            cout << countN << " la so may man!" << endl;
            count++;
        }
        i = countN;
        SumN = 0;
    }
    cout << "Co " << count << " so may man trong doan tu " << P << " den " << Q;
    Bai2_out.open("C:\\Users\\Administrator\\Documents\\Bai2_out.TXT", ios::out);
    if (Bai2_out.is_open())
    {
        cout << "\nDoc file output thanh cong!" << endl;
    }
    else
    {
        cout << "\nDoc file output that bai!" << endl;
    }
    Bai2_out << count;
}
