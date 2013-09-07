#include <iostream>
using namespace std;

int main() {
	cout. setf(ios::fixed);
	cout. precision(2);
	double n;
	double suma = 0.0;
	int c = 0;
	while(cin >> n) {
		c++;
		suma += n;
	}
	cout << suma/c << endl; 
}
