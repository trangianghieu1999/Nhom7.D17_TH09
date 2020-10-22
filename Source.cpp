#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b){
	//Neu a hoac b null return 0
	if(!a || !b) {
		return 0;
	}
	else
		// tra ve ket qua a nhan b
		return (a*b);
}
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";

	system("pause");
	return 0;
}