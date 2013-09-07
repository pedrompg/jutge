#include <iostream>
#include <cmath>
#include <string>
using namespace std;
    
int main(){
	cout.setf(ios::fixed);
	cout.precision(6); 
	int n;
	cin >> n;
	while (n > 0) {
	   string s;
	   double a,b;
	   cin >> s >> a;
	   if  (s == "rectangle") {
			cin >> b;
			cout << a*b << endl;
	   }
	   else cout << M_PI*a*a << endl;
	   --n;
	}
}
    
