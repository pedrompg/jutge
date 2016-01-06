#include <iostream>
#include <cmath>
#include <string>
using namespace std;
    

int main() {
	cout.setf(ios::fixed);
	cout.precision(4); 
	double x;
	cin >> x;
	double sum = 0;
	double coef;
	int exp = 0;
	while (cin >> coef) {
		sum += coef*pow(x,exp);
		exp++;
	}
	cout << sum << endl;
}
    
