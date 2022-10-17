#include <iostream>
using namespace std;


int main(){
	string nama;
	int nilai;
	
	cout<<"Masukkan Nama Anda: "; cin>>nama;
	cout<<"Masukkan nilai kegantengan anda (1-100): "; cin>>nilai;
	
	switch (nilai) {
		case 1 ... 84 : cout<<"perlu oplas"<<endl;
		break;
		case 85 ... 100 : cout<<"anda ganteng"<<endl;
		break;
		default:
			cout<<"salah input"<<endl;
	}
}
