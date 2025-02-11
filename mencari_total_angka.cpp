#include <iostream>
using namespace std;

int main() {
    char ulangi = 'y';
    int total = 0;
    int bilangan;
    int counter = 1;

    while (ulangi == 'y') {
        cout << "Masukkan Bilangan Ke-" << counter << " : ";
        cin >> bilangan;

        total += bilangan;

        cout << "Mau memasukkan data lagi (y/t?) : ";
        cin >> ulangi;
        
        counter++;
    }

    cout << "\nTotal Bilangan = " << total << endl;

    return 0;
}