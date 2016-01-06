#include <iostream>
using namespace std;

int main() {
	int x;
	bool trobat = false;
	cin >> x;
	if(x%4 == 0) {
		if((x%10 == 0 and x%100 == 0) and ((x/100)%4 == 0)) trobat = true;
		if (x%10 != 0 and x%100 != 0) trobat = true;
	}
	if(trobat) cout << "YES" << endl;
	else cout << "NO" << endl;
}
