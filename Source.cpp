#include <iostream>

using namespace std;
int tong(int a, int b)
{
 
	return a+b;
}


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
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a,b;
cout << "Nhap so a : ";
cin >> a;
cout <<"Nhap so b : ";
cin >> b;
cout << "Tong cua 2 so la : " << tong ;
cout << "Hieu cua 2 so la : " << hieu ;
cout << "Tich cua 2 so la : " << tich ;
cout << "Thuong cua 2 so la : " << thuong ;
	system("pause");
	return 0;
}
