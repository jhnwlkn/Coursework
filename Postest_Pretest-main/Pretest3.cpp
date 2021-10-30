#include <iostream>
using namespace std;

int main(){
	int o, b;
	// o = ongkir
	// b = belanjaan
	
	cout << "Nama : John Wilken Christoper Nainggolan \n" ;
	cout << "Npm  : 2117051024 \n" ;
	cout << "======================================== \n";
	
	cin >> b;
	
	if ( b<50000){
		o = 41000;
		cout << b+o;
	}else if (b>=120000){
		o = 0;
		cout << b+o;
	}else	{
		cout << b + 11000;
	}
	
	return 0;
}
