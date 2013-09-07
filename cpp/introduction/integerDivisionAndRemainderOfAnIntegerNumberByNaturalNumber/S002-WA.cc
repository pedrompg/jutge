#include <iostream>
using namespace std;

int main() {
	int x,y;
	cin >> x >> y;
	if(x < 0) {
		cout << x/y - 1;
		while(x < y) {
			x += y;
		}
		cout << " " << x%y << endl;
	}
	else cout << x/y << " " << x%y << endl;
}
