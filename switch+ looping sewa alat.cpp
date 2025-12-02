#include <iostream>
using namespace std;

int main (){
	char ulang;
	
	do {
		int pilihan, harga, menit;
		int biaya;
		
		cout << "\n====pilihan sewa alat gym====\n";
		cout <<" 1. Dumbell (5000/15menit)\n";
		cout <<" 2. Treadmill (10000/15menit)\n";
		cout <<" 3. Barbell (8000/15menit)";
		cout <<" 4. Static Bike (7000/15menit)\n";
		cout <<" 5. Masukkan pilihan (1-4):" ;
		cin >> pilihan ;
		
		cout <<"Masukkan Durasi (menit):" ;
		cin >> menit;
		
		switch (pilihan) {
			case 1:
				harga= 5000;
				break;
			case 2:
			    harga= 10000;
				break;
			case 3:	
			    harga= 8000;
			    break;
			case 4:
				harga= 7000;
				break;
		}
		int interval = (menit + 14) / 15;
		biaya = interval * harga;
		
		cout <<"Total biaya: Rp" << biaya << endl;
		
		cout <<"\napakah kamu ingin menyewanya kembali (y\n):" ;
		cin >> ulang;
	}while (ulang == 'y' || ulang == 'Y');
	
	cout << "\nTerima Kasih Bro\n" ;
	
	return 0;
}
