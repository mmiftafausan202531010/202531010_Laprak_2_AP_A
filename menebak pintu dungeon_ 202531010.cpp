#include <iostream>
using namespace std;

int main(){
    int kode = 7, a;

    for(int i=1; i<=3; i++){
        cin >> a;

        if(a == kode){
            cout << "Percobaan " << i << "/3 - Tebak: " << a << " Benar!" << endl;
            return 0;
        }
        else{
            cout << "Percobaan " << i << "/3 - Tebak: " << a << " Salah!" << endl;
        }
    }
    cout << "Kalah! Angka = " << kode;
    
}
