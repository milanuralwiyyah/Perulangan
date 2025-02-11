#include <iostream>
using namespace std;

int main() {
    cout << "Bilangan Ganjil Antara 1 sampai 20" << endl;
    
    for (int i = 1; i <= 20; i++) {
        if (i%2!=0) {
        cout << i << " ";
    }
    }
cout << endl;

    return 0;
}