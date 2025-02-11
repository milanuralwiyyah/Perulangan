#include <iostream>
using namespace std;

int main(){
    char ulangi = 'y';
    int counter = 0;

    do {
        cout << "Apakah kamu mau mengulang?\n";
        cout << "Jawab (y/t): ";
        cin >> ulangi;

        // increment counter
        counter++;
    } while(ulangi == 'y');

    cout << "\n\n----------\n";
    cout << "Perulangan Selesai!\n";
    cout << "Kamu mengulang sebanyak " << counter << " kali" << endl;

    return 0;
}