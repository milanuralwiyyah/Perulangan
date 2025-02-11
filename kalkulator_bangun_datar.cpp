#include <iostream>
using namespace std;

int main ()
{
    double sisi, luas, keliling, panjang, lebar, alas, tinggi, jariJari;
    int angka;
    do {
    cout << "Bangun Datar Yang Dipilih :" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "4. Lingkaran" << endl;
    cout << "5. Program Selesai" << endl;
    cout << "Pilih Bangun Datar (1-5) : ";
    cin >> angka;
    
    switch (angka) {
        case 1:
        cout << "Angka 1 : Persegi" << endl;
        cout << "Masukan Panjang Sisi : ";
        cin >> sisi;
        luas = sisi*sisi;
        keliling = 4*sisi;
        cout << "Luas Persegi adalah :" << luas << " cm" << endl;
        cout << "Keliling Persegi adalah :" << keliling << " cm" << endl;
        break;
        case 2:
        cout << "Angka 2 : Persegi Panjang" << endl;
        cout << "Masukan Panjang Persegi : ";
        cin >> panjang;
        cout << "Masukan Lebar Persegi : ";
        cin >> lebar;
        luas = panjang*lebar;
        keliling = 2*(panjang+lebar);
        cout << "Luas Persegi Panjang adalah :" << luas << " cm" << endl;
        cout << "Keliling Persegi Panjang adalah :" << keliling << " cm" << endl;
        break;
        case 3:
        cout << "Angka 3 : Segitiga" << endl;
        cout << "Masukan Alas Segitiga : ";
        cin >> alas;
        cout << "Masukan Tinggi Segitiga : ";
        cin >> tinggi;
        luas = 0.5*alas*tinggi;
        cout << "Luas Segitiga adalah :" << luas << " cm" << endl;
        break;
        case 4:
        cout << "Angka 4 : Lingkaran" << endl;
        cout << "Masukan Jari-Jari Lingkaran : ";
        cin >> jariJari;
        luas = 3.14159*jariJari*jariJari;
        keliling = 2*3.14159*jariJari;
        cout << "Luas Lingkaran adalah :" << luas << " cm" << endl;
        cout << "Keliling Lingkaran adalah :" << keliling << " cm" << endl;
        break;
        case 5:
        cout << "Program Selesai" << endl;
    }
        } while (angka != 5);
    return 0;
}