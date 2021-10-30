#include <iostream>
using namespace std;
int main()
{
int j,m,s,N;
  
cin>>N;
  
if (N >= 1 && N <= 100000){
j=N/3600;
s=N%3600;
m=s/60;
s=s%60;
cout<<j<<" jam "<< m <<" menit " << s <<" detik";
  }
}
