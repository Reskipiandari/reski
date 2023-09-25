#include <iostream>
using namespace std;
int main(){
	
	int A,B,pilihan;
	cout<<"pilihan kalkulator"<<endl;
	cout<<"1.penjumlahan"<<endl;
	cout<<"2.perkalian"<<endl;
	cout<<"3.pembagian"<<endl;
	cout<<"4.pengurangan"<<endl;
	cout<<"5.modulus"<<endl;
	cout<<"masukan pilihan anda: ";
	cin>>pilihan;
	cout<<"masukan bilangan A : ";
	cin>>A;
	cout<<"masukan bilangan B : ";
	cin>>B;
	if(pilihan ==1){
		cout<<"hasilnya = "<<A+B;
	}
	else if(pilihan ==2){
		cout<<"hasilnya = "<<A*B;
	}
		else if(pilihan ==3){
		cout<<"hasilnya = "<<A/B;
	}
		else if(pilihan ==4){
		cout<<"hasilnya = "<<A-B;
	}
		else if(pilihan ==5){
		cout<<"hasilnya ="<< A%B;
	}
	else
	{
		cout<<"tidak ada enu yang tersedia";
	}
	
}
