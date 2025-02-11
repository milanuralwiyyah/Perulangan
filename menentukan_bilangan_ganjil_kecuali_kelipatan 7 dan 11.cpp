#include <iostream>
using namespace std;

int main() {
    int bilangan;
    
    cout << "Masukkan Bilangan : ";
    cin >> bilangan;
    
    cout << "Bilangan Ganjil (Kecuali Kelipatan 7 dan 11) : " << endl;
    
    for (int i = 1; i < 100; i+=2) {
        if (i>=100){
            break;
        }
        if (i%7==0 || i%11==0 ) {
            continue;
        }
        cout << i << " ";
    }
cout << endl;

    return 0;
}