#include <iostream>
using namespace std;


int main(){
	string nama;
	int nilai;
	
	cout<<"Masukkan Nama Anda: "; cin>>nama;
	cout<<"Masukkan nilai kegantengan anda (1-100): "; cin>>nilai;
	if(nilai >= 85 && nilai <= 100 ){
		cout<<"Anda ganteng"<<endl;
	}else if(nilai <= 84 && nilai >=1){
		cout<<"perlu oplas"<<endl;
	}else if(nilai <= 0 ){
		cout<<"salah input"<<endl;
	}else if(nilai = 100 ){
		cout<<"boong"<<endl;
	}
}
