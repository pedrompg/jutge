#include <iostream>
#include <cmath>
#include <string>
using namespace std;
    
double power(double x, int p) {
	if(p == 0) return 1;
	double r = 1;
	for(int i = 1; i <= p; i++){
		r = r*x;
	}
	return r;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(4); 
	double x;
	cin >> x;
	double suma = 0;
	double coef;
	int exp = 0;
	while (cin >> coef) {
		suma += coef*power(x,exp);
		exp++;
	}
	cout << suma << endl;
}
    
