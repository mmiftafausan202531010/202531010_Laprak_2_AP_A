#include <iostream>
using namespace std;

int main(){
    int pilihan;
    int a = 0, b = 1, c;
    cout << "=== FIBONACCI GENERATOR ===" << endl;
    cout << "1) n suku" << endl;
    cout << "2) sampai <= m" << endl;
    cout << "3) exit" << endl;
    cout << "Pilih: ";
    cin >> pilihan;

    switch(pilihan){
        case 1:
        int n;
        
        cout << "Masukkan n: ";
        cin >> n;
        if(n < 0){
            cout << "Input tidak valid!";
            return 0;
        }
        cout << "Hasil (" << n << " suku): " << endl;
        for(int i = 1; i <= n; i++){
            cout << a << " ";
            c = a + b;
            a = b;
            b = c;
        }
        break;

        case 2:
        int m;
       
        cout << "Masukkan m: ";
        cin >> m;
        cout << "Hasil (<= " << m << "): " << endl;
        for(int i = 1; i <= m; i++){
            cout << a << " ";
            c = a + b;
            a = b;
            b = c;
            
            if(a>=m){
                break;
            }
        }
        break;

        case 3:
        return 0;
    }

}
