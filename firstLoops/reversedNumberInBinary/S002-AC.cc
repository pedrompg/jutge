#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n/2 > 0) {
		cout << n%2;
		n /=2;
	}
	cout << n%2 << endl;
}
