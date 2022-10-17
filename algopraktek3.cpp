#include <iostream>
using namespace std;

int main(){
	string nama,c,g;
	int nilai;
	
	cout<<"Masukkan Nama Anda: "; cin>>nama;
	cout<<"Masukkan nilai kegantengan anda (1-100): "; cin>>nilai;
	(nilai > 85) ? (cout<<"Anda ganteng"<<endl) : (cout<<"Perlu Oplas"<<endl);
}

