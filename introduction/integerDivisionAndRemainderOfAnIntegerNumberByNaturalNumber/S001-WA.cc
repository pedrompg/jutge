#include <iostream>
using namespace std;

int main() {
	int x,y,quotient,remainder;
	cin >> x >> y;
	if ( x < 0 ) { 
        quotient = (x + y - 1)/y; 
        remainder = x%y + y; 
    } else { 
        quotient = x/y; 
        remainder = x%y; 
    } 
	cout << quotient << " " << remainder << endl;
}
