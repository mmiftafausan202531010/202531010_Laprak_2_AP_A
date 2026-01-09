#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    int hadir = 0, thadir = 0;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        int a;
        cout << "Mahasiswa " << i << " (1=hadir, 0=tidak): ";
        cin >> a;

        if(a == 1){
            hadir++;
        }
        else if(a == 0){
            thadir++;
        }

    }

    double persen = (double)hadir / n * 100;
    cout << fixed << setprecision(2);
    cout << "Jumlah hadir: " << hadir << endl;
    cout << "Jumlah tidak hadir: " << thadir << endl;
    cout << "Persentase hadir: " << persen << "%" << endl;

    return 0;

}
