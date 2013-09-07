#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int s = 0;
	if ( n%4 == 0 and n%100 != 0 ) s = 1;
	if ( n%100 == 0 and (n/100)%4 == 0 ) s = 1;
	if ( s == 1) cout << "YES" << endl;
	else cout << "NO" << endl;
}
