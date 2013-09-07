#include <iostream>
using namespace std;

int main() {
	double x;
	cin >> x;
	int x_int = (int) x;
	cout << x_int << " ";
	double y = x - x_int;
	if(y >= 0.5) cout << x_int + 1;
	else cout << x_int;
	cout << " ";
	if(y != 0) cout << x_int + 1;
	else cout << x_int << endl; 
}
