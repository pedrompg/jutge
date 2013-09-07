#include <iostream>
using namespace std;

int main() {
	cout. setf(ios::fixed);
	cout. precision(4);
	int n;
	cin >> n;
	double h = 0.0;
	for (double i = 1; i <= n; i++)
	{
		h += 1/i;
	}
	cout << h << endl;
}
