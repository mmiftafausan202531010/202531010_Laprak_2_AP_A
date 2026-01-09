#include <iostream>
using namespace std;

int main(){
    int harga, diskon, total = 0, jumlah = 0, bayar = 0;

    cout << "Masukkan harga barang (0 untuk selesai): " << endl;
    do{
        cout << "Harga: ";
        cin >> harga;
        if(harga !=0){
            jumlah++;
            total += harga;
        }
    }while(harga != 0);
    cout << "Jumlah barang: " << jumlah << endl;
    cout << "Total sebelum diskon: " << total << endl;
    if(total >= 100000){
        diskon = total * 0.1;
    } 
    cout << "Diskon: " << diskon << endl;
    bayar = total - diskon;
    cout << "Total bayar: " << bayar << endl;
}
