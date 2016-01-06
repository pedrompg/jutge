#include <iostream>
using namespace std;

int main() {
	char c;
	int n = 0;
	while (cin >> c and c != '.') {
		if (c == 'a') n++;
	}
	cout << n << endl;
}
