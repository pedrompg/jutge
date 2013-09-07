#include <iostream>
#include <string>
using namespace std;

int main() {
	string x,y;
	cin >> x >> y;
	cout << x;
	if(x > y) cout << " > ";
	else if (x < y) cout << " < ";
	else cout << " = ";
	cout << y << endl;
}
