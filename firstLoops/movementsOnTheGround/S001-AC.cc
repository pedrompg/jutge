#include <iostream>
using namespace std;

int main() {
	char c;
	int x,y;
	x = y = 0;
	while (cin >> c) {
		if (c == 'n') y--;
		else if (c == 's') y++;
		else if (c == 'e') x++;
		else x--;
	}
	cout << "(" << x << ", " << y << ")" << endl;
}
