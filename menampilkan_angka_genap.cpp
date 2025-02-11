#include <iostream>
using namespace std;

int main() {
    cout << "Bilangan Genap Antara 2 sampai 50" << endl;
    
    for (int i = 2; i <= 50; i++) {
        if (i%2==0) {
        cout << i << " ";
    }
    }
cout << endl;

    return 0;
}