#include <iostream>
using namespace std;
int tong(int a, int b){
	return a+b;
}
int hieu(int a, int b){
	return a-b;
}
int tich(int a, int b){
	return a*b;
}
<<<<<<< HEAD
=======

>>>>>>> tich
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "\Chon phep toan(+,-,*) " ;
	cin phepToan;
	if(phepToan == '+')
		cout<<"Tong="<< tong(a,b)<<endl;
	if(phepToan == '-')
		cout<<"Hieu="<< hieu(a,b)<<endl;
<<<<<<< HEAD
	if(phepToan == '-')
=======
	if(phepToan == '*')
>>>>>>> tich
		cout<<"Tich="<< tich(a,b)<<endl;

//cau19

	system("pause");
	return 0;
}