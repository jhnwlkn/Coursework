#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int t, b, u;
    
    cin >> t >> b >> u;
    
    if ( t > 170 && b > 55 && u >= 15){
    	cout << "Lolos";
	} else {
		cout << "Tidak Lolos";
	}
    
    return 0;
}
