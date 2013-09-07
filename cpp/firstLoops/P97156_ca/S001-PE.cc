#include <iostream>
using namespace std;

int main() {
	int x,y;
	cin >> x >> y;
	int i;
	for (i = x; i < y; i++)
	{
		cout << i  << ",";
	}
	if (x <= y) cout << i << endl;
}
