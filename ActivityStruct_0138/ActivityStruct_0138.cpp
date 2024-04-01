#include <iostream>
using namespace std;

struct mahasiswa {
	string nim;
	string nama;
	string alamat;
	string umur;
};

int main(){
	mahasiswa  mhs;
	cout << "nomor Mahasiswa : ";
	cin >> mhs.nim;
	cout << "Nama Mahasiswa :";
	cin >> mhs.nama;
	cout << "alamat mahasiswa : ";
	cin >> mhs.alamat;
	cout << "Umur mahasiswa : ";
	cin >> mhs.umur;

	cout << endl;
	cout << "\n Nim :" << mhs.nim;
	cout << "\n Nama : " << mhs.nama;
	cout << "\n alamat : " << mhs.alamat;
	cout << "\n Umur : " << mhs.umur;
}