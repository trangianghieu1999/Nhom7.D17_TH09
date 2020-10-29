#include <iostream>

using namespace std;
int tong(int a, int b)
{
 
	return a+b;
}
int hieu(int a, int b)
{
	int s = 0;
	s = a - b;
	return s;
}
int tich(int a, int b){
	//Neu a hoac b null return 0
	if(!a || !b) {
		return 0;
	}
	else
		// tra ve ket qua a nhan b
		return (a*b);
}
float thuong(int a, int b){
	return a/b;
}

// Features
float chuViVuong(canh a){
	return 4*a;
}
float chuViHinhChuNhat(int a, int b)
{
	return(2 * (a + b));
}
float chuViHinhTron(int r){
	float Pi = 3.14, cv;	
	return (cv = 2 * Pi * r);
}
int main()
{

	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	
	//Bai 1
	/*
	int a,b;
	cout << "Nhap so a : ";
	cin >> a;
	cout <<"Nhap so b : ";
	cin >> b;
	cout << "Tong cua 2 so la : " << tong ;
	cout << "Hieu cua 2 so la : " << hieu ;
	cout << "Tich cua 2 so la : " << tich ;
	cout << "Thuong cua 2 so la : " << thuong ;
	*/
	// Bai 2
	cout<<"Tinh chu vi va dien tich";
	cout<<" Hinh tron (1)";
	cout<<" Hinh vuong (2)";
	cout<<" Hinh chu nhat (3)";
	cin>>n;
	int dai;
	int rong;
	switch(n)
	{
		case 1:
		{
			cout<<"Nhap chieu ban kinh";
			cin>> dai;
			cout<<"Chu vi hinh tron la :"<<chuViHinhTron(r);
			cout<<"Dien tich hinh tron la :"<<"???";
			break;
		}
		case 2:
		{
			cout<<"Nhap chieu dai canh";
			cin>> dai;
			cout<<"Chu vi vuong la :"<<chuViVuong(dai);
			cout<<"Dien tich vuong tron la :"<<"???";
			break;
		}
		case 3:
		{
			cout<<"Nhap chieu dai va chieu rong";
			cin>> dai;
			cinn>>rong;
			cout<<"Chu vi hinh chu nhat la :"<<chuViHinhChuNhat(dai,rong);
			cout<<"Dien tich hinh chu nhat la :"<<"???";
			break;
		}
		//Bai 3
		//Bai4
	}
	

	
	
	system("pause");
	return 0;
}


