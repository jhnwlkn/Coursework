#include <iostream>
using namespace std;

int main(){
	string nama;
	double jumlah_pinjaman;
	double lama_pinjaman;
	double bunga;
	double angsuran_pokok;
	double bunga_perbulan;
	
	cout << "Nama : John Wilken Christoper Nainggolan \n" ;
	cout << "Npm  : 2117051024 \n" ;
	cout << "======================================== \n"; 
	
	getline(cin,nama);
	cin >> jumlah_pinjaman;
	cin >> lama_pinjaman;
	cin >> bunga;
	
	angsuran_pokok = jumlah_pinjaman / (lama_pinjaman*12);
	bunga_perbulan = (bunga / 100 )* jumlah_pinjaman;
		
	cout << "Nama = " << nama << endl ;
	cout << "Cicilan per Bulan = " << (double)angsuran_pokok + bunga_perbulan <<endl ;
	
	return 0;
}
