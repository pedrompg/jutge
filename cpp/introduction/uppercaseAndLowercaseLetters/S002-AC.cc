#include <iostream>
using namespace std;

int main() {
	char x,c;
	cin >> x;
	if(x >= 'a' and x <= 'z') {
		c = x - 'a' + 'A';
	}
	else c = x - 'A' + 'a';
	cout << c << endl;
}
