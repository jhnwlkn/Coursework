#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
	
	double L, pi, r;
	
	pi = 3.14;
	cin >> r;
	
	if (0 < r <= 100){
		L = pi * r*r;
		printf("%.2f",L);
	}
	  
    return 0;
}
