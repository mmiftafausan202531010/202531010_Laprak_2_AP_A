#include <iostream>
using namespace std;

int main(){
    int n, uang, total = 0;

    cout << "Masukkan jumlah hari: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << "Uang saku hari ke-" << i << ": ";
        cin >> uang;
        total += uang;
    }
    cout << "Total: " << total;
}
