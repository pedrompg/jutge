#include <iostream>
using namespace std;

int main() {
	int a1,b1,a2,b2;
	cin >> a1 >> b1 >> a2 >> b2;
	if (a1 == a2 and b1 == b2) cout << "= , ";
	else if ((a1 >= a2 and b1 < b2) or (a1 > a2 and b1 <= b2)) cout << "1 , ";
	else if ((a1 <= a2 and b1 > b2) or (a1 < a2 and b1 >= b2)) cout << "2 , ";
	else cout << "? , ";
	if(a1 <= a2) {
		if (b1 < a2) {
			cout << "[]" << endl;
		}
		else {
			cout << "[" << a2 << ",";
			if(b1 <= b2) cout << b1;
			else cout << b2;
			cout << "]" << endl;
		}
	}
	else {
		if(b2 < a1){
			cout << "[]" << endl;
		}
		else {
			cout << "[" << a1 << ",";
			if(b2 <= b1) cout << b2;
			else cout << b1;
			cout << "]" << endl;
		}
	}
}
