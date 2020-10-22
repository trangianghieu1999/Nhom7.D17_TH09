#include <iostream>

using namespace std;
int tong(int a, int b);

//int hieu(int a, int b);
//int tich(int a, int b);
//float thuong(int a, int b);
int main()
{

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
