#include <iostream>
#include <cmath>
#include <string>
using namespace std;
    

int main(){
	cout.setf(ios::fixed);
	cout.precision(4); 
	double x;
	cin >> x;
	double suma = 0;
	double coef;
	int exp = 0;
	while (cin >> coef) {
		suma += coef*pow(x,exp);
		exp++;
	}
	cout << suma << endl;
}
    
