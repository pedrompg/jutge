#include <iostream>
using namespace std;

int main() {
	int x,y,z;
	cin >> x >> y >> z;
	if(x > y and x > z) cout << x;
	else if(y > z) cout << y;
	else cout << z;
	cout << endl;
}
