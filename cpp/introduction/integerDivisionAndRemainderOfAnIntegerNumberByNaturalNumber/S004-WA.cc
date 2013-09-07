#include <iostream>
using namespace std;

int main() {
	int x,y;
	cin >> x >> y;
	int d = x/y;
	int r = x%y;
	if(r < 0) {
		r += y;
	}
	if(d < 0) d -= 1;
	cout << d << " " << r << endl;
}
