#include <iostream>
using namespace std;

int main() {
	int n,x;
	cin >> n;
	while(n/16 > 0) {
		x = n%16;
		if(x >= 10) cout << char ('A' + (x-10));
		else cout << x;
		n /= 16;
	}
	x = n%16;
	if(x > 10) cout << char ('A' + (x-10));
	else cout << x;
	cout << endl;
}
