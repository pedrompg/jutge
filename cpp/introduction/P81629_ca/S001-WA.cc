#include <iostream>
using namespace std;

int main() {
	
	int x,y;
	cin >> x >> y;
	cout << "Bitllets de 500 euros: " << x/500 << endl;
	cout << "Bitllets de 200 euros: " << x%500/200<< endl;
	cout << "Bitllets de 100 euros: " << x%500%200/100 << endl;
	cout << "Bitllets de 50 euros: " << x%500%200%100/50 << endl;
	cout << "Bitllets de 20 euros: " << x%500%200%100%50/20 << endl;
	cout << "Bitllets de 10 euros: " << x%500%200%100%50%20/10 << endl;
	cout << "Bitllets de 5 euros: " << x%500%200%100%50%20%10/5 << endl;
	cout << "Monedes de 2 euros: " << x%500%200%100%50%20%10%5/2 << endl;
	cout << "Monedes de 1 euro: " << x%500%200%100%50%20%10%5%2 << endl;
	cout << "Monedes de 50 centims: " << y/50 << endl;
	cout << "Monedes de 20 centims: " << y%50/20 << endl;
	cout << "Monedes de 10 centims: " << y%50%20/10 << endl;
	cout << "Monedes de 5 centims: " << y%50%20%10/5 << endl;
	cout << "Monedes de 2 centims: " << y%50%20%10%5/2 << endl;
	cout << "Monedes de 1 centims: " << y%50%20%10%5%2 << endl;

}
