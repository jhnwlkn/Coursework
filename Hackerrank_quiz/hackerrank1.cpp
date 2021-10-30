#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    
    cin >> n;
    
    if (n > 0 && n < 10){
		for (int i = n; i > 0; i--){
			for(int j = i; j > 0; j--){
				cout <<i;	
			}
		
		cout << endl;
		}
	} else if (n>=-20 ){
		cout << "Bilangan tidak sesuai!";
	} else {
		cout << "Bilangan tidak sesuai!";
	}
}
