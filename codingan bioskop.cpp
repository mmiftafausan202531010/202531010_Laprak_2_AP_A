#include <iostream>
using namespace std;

int main () {
	int umur;
	//Masukkan umur pengunjung//
	cout <<"Masukkan umur: ";
	cin >> umur;
	
	if (umur < 13) {
		cout << "SU" << endl;
	} else if (umur >= 13 && umur <= 16 ) {
		cout << "R13" << endl;
	} else if (umur >= 17 && umur <= 20 ) {
		cout << "D17" << endl;
	} else {
		cout << "D21" << endl;
	}
	return 0;
}
