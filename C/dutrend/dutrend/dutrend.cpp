#include<iostream>
#include<Windows.h>
#include<fstream>
#include<string>
using namespace std;
void txtColor(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
// 0 = Black
// 1 = Blue
// 2 = Green
// 3 = Aqua
// 4 = Red
// 5 = Purple
// 6 = Yellow
// 7 = White
// 9 = Light Blue
// 8 = Gray
void input(string s1, string s2) {
	txtColor(2);
	cout << "Nhap ten: " << endl;
	getline(cin, s1);
	cout << "Sen may kg!:" << endl;
	getline(cin, s2);
}
void load() {
	int n = 0;
	while (n <= 100)
	{
		txtColor(4);
		Sleep(300);
		cout << "Loading.....loading....." << n << "%" << endl;
		n++;
		n += 9;
	}
	Sleep(1500);
	cout << "Loading.....loading....." << "100%" << endl;
}
int main() {
	string s1; string s2;
	input(s1, s2);
	load();
	int color;
	txtColor(15);
	cout << "Nhap color ( Nhap 1,2,3,4,.....)" << endl;
	cin >> color;
	txtColor(color);
	ifstream FileIn;
	FileIn.open("C:\\Users\\Administrator\\Documents\\a.txt", ios_base::in);//lay duong dan copy vao trong""
	string line;
	while (!FileIn.eof()) {
		getline(FileIn, line);
		cout << line << endl;
		Sleep(100);
	}
	FileIn.close();
	system("pause");
	return 0;
}