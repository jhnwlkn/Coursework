#include <iostream>
using namespace std;

//Nama : John Wilken Christoper Nainggolan
//NPM  : 2117051024

int main (){
	int x;
	
//	input
	cin >> x;
	
//	output
	if (x>9){
		cout << x << "\n";
	} else {
		if (x==1){
			cout << "Satu\n";
		} else if (x==2){
			cout << "Dua\n";
		} else if (x==3){
			cout << "Tiga\n";
		} else if (x==4){
			cout << "Empat\n";
		} else if (x==5){
			cout << "Lima\n";
		} else if (x==6){
			cout << "Enam\n";
		} else if (x==7){
			cout << "Tujuh\n";
		} else if (x==8){
			cout << "Delapan\n";
		} else {
			cout << "Sembilan\n";
		}
	}
	
	return 0;
}
