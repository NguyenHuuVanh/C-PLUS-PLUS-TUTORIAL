#include <iostream>
#include <string>
#include <fstream>
#include "myLib.h"
using namespace std;

/*
Ý t??ng:
S? d?ng  chuy?n hình ?nh sang text
sau ?ó ??c file và in ra màng hình (l?u ý set width và height cho v?a v?i ?nh)
*/

int main()
{

	for (int i = 1; i < 19; i++)
	{

		if (i <= 4)
		{
			Sleep(1000);
			system("cls");
		}
		if (i == 1)
			SetColor(7);
		else if (i == 2)
			SetColor(12);
		else if (i == 3)
			SetColor(14);
		else
			SetColor(11);
		ifstream file;
		string s = "banner" + to_string(i) + ".txt";
		file.open(s, ios_base::in);
		string line;
		while (getline(file, line)) {
			cout << line << endl;
			if (i > 3)
				Sleep(20);
			else
				Sleep(3);
		}
		file.close();
	}
	_getch();
}