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


//int hieu(int a, int b);
//int tich(int a, int b);
//float thuong(int a, int b);

int main()
{
<<<<<<< HEAD
	int a;
	int b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "\nNhap a: ";
	cin >> a;
	cout << "\nNhap b: ";
	cin >> b;
	cout << "\nHieu cua a,b la: " << hieu(a,b);
	system("pause");
	return 0;
}
int hieu(int a, int b)
{
	int s = 0;
	s = a - b;
	return s;
}
=======

	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a,b;
	cout <<"nhap a";
	cin >> a;
	cout << "nhap b";
	cin>>b;
	cout<<"ket qua tong a + b la "<<tong(a,b);
	system("pause");
	return 0;
}
int tong(int a, int b)
{
 
	return a+b;
}
>>>>>>> 478bab34d201b9101686b10d14fd4b3248ed1bd5
