//Nama : John Wilken Christoper Nainggolan
//NPM  : 2117051024
//=========================================

#include <iostream>
using namespace std;

int main (){
	long T, n, b;
	int x=1;
	
//	T = simpanan pokok 
//	n = lama simpanan (n bulan)
//	b = bunga perbulan

//	input
	cin >> T;
	cin >> b;
	cin >> n;
	
//	output
	cout << "Simpanan pokok \t= " << T << endl;
	
	do {
		T= T + b*T/100;
		cout << "Bulan ke-" << x << " \t= " << T << endl;
		x++;
	}
	while (x<=n);
	
	return 0;
}
