#include <iostream>
#include <cmath>
using namespace std;

double jarak(double x1, double y1, double x2, double y2){
    int h;
     h = pow(x2 - x1 , 2) + pow (y2 - y1 , 2);
    return sqrt(h);
}

// D = [( x2 – x1 )2 + (y2 – y1)2] 1/2

int main() {
    double x1 , y1 , x2 , y2;
    
    cin >> x1 >> y1 >> x2 >> y2;

    cout<< jarak(x1,y1,x2,y2);
}