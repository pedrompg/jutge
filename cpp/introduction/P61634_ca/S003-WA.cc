#include <iostream>
using namespace std;

int main() {
	int x;
	bool cert = false;
	cin >> x;
	if(x%4 == 0) {
		if ((x%10 == 0 and (x/10)%10 == 0) and ((x/100)%4 == 0)) cert = true;
		if (x%10 != 0 and (x/10)%10 != 0) cert = true;
	}
	if(cert) cout << "YES" << endl;
	else cout << "NO" << endl;
}
