#include <iostream>

using namespace std;
// Features
int tong(int a, int b)
{

	return a + b;
}
int hieu(int a, int b)
{
	int s = 0;
	s = a - b;
	return s;
}
int tich(int a, int b) {
	return(a * b);
}
float thuong(int a, int b) {
	return a / b;
}
float chuViHinhTron(int r)
{
	
	float PI_VALUE = 3.14;

		

	
	return ( 2 * PI_VALUE * r);
		
}
float chuViVuong(canh a){
	return 4*a;
}
float chuViHinhChuNhat(int a, int b)
{
	return(2 * (a + b));
}
int main()
{

	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	
	cout<<"\n .Chon 1 lua chon duoi day de bat dau chuong trinh";
	cout<<"\n 1. Tinh Tong - Hieu - Tich - Thuong cua hai so";
	cout<<"\n 2. Tinh Chu Vi va Dien tich";
	cout<<"\n 3.Phep cong random ";
	cout<<"\n 4. Phep tru random";
	cout<<"\n Chon 0 de thoat ";
	int n;
	cin>>n;
	
		
	if(n<0 ||n>4) {
		cout<< "Lua chon khong hop le";
		return 0;
		}
	switch(n)
	{
		case 0:
			break;
		case 1:
		{
					
			int a,b;
			cout << "\nNhap so a : ";
			cin >> a;
			cout <<"\nNhap so b : ";
			cin >> b;
			cout << "Tong cua 2 so la : " << tong(a,b) ;
			cout << "Hieu cua 2 so la : " << hieu(a,b) ;
			cout << "Tich cua 2 so la : " << tich (a,b);
			cout << "Thuong cua 2 so la : " << thuong(a,b) ;
			break;
		}
		case 2:
		{
			
			// Bai 2
			cout<<"Tinh chu vi va dien tich";
			cout<<" \n 1.Hinh tron ";
			cout<<" \n 2.Hinh vuong ";
			cout<<" \n 3.Hinh chu nhat ";
			int x;
			cin>>x;
			int dai;
			int rong;
			switch(x)
			{
			case 1:
				{
					cout<<"\n Nhap ban kinh R:";
					cin>> dai;
					cout<<"\n Chu vi hinh tron la :"<<"Goi ham vao day";
					cout<<"\n Dien tich hinh tron la :"<<"Goi ham vao day";
					break;
				}
			case 2:
				{
					cout<<"\nNhap chieu dai canh :";
					cin>> dai;
					cout<<"\nChu vi vuong la :"<<"Goi ham vao day";
					cout<<"\nDien tich vuong tron la :"<<"Goi ham vao day";
					break;
				}
			case 3:
				{
					cout<<"\nNhap chieu dai va chieu rong";
					cin>> dai;
					cin>>rong;
					cout<<"\nChu vi hinh chu nhat la :"<<"Goi ham vao day";
					cout<<"\nDien tich hinh chu nhat la :"<<"Goi ham vao day";
					break;
				}
			}		
		}
		case 3:
		{
			//Bai 3
			int a,b;
			
		}
		case 4:
		{
			//Bai4
			int a,b;
				
			
		}
		
		
	}	
	
	system("pause");
	return 1;
}
