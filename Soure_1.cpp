#include <iostream>
using namespace std;

float chuViVuong(canh a){
	return 4*a;
}
float chuViHinhChuNhat(int a, int b)
{
	return(2 * (a + b));
}
float chuViHinhTron(){
	int r;
	float Pi = 3.14, dt, cv;

	
	cout << "Nhập bán kính R: ";
	cin >> r;
	cv = 2 * Pi * r;
	cout << "\n Chu vi hình tròn: " << cv;


}