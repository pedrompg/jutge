#include <iostream>
using namespace std;

int main() {
	int n, c, copia;
	c = 0;
	cin >> n;
	copia = n;
	if (n == 0) cout << "El nombre de digits de " << copia << " es " << "1." << endl;
	else {
		while(n > 0) {
			c++;
			n /= 10;
		}
		cout << "El nombre de digits de " << copia << " es " << c << "." <<endl;
	}
}
