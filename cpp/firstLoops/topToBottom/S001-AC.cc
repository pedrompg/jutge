#include <iostream>
using namespace std;

int main() {
	int x,y,inici,fi;
	cin >> x >> y;
	if(x > y) {
		inici = x;
		fi = y;
	}
	else {
		inici = y;
		fi = x;
	}
	for (int i = inici; i >= fi; i--)
	{
		cout << i << endl;
	}
}
