#include <iostream>
using namespace std;

int main() {
    int pilihan, harga, diskon, produk, jumlah, hargaTotal = 0, totalMakanan = 0, totalMinuman = 0, totalKebersihan = 0, totalRumahTangga = 0;

    do {
        cout << "Sistem Kasir Minimarket" << endl;
        cout << "1. Tambah Item Pembelian" << endl;
        cout << "2. Total Pembelian Per Kategori" << endl;
        cout << "3. Total Harga Setelah Diskon" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih Menu (1-4): ";
        cin >> pilihan;

        if (pilihan == 1) {
            do {
                cout << "Produk Yang Tersedia :" << endl;
                cout << "1. Makanan" << endl;
                cout << "2. Minuman" << endl;
                cout << "3. Produk Kebersihan" << endl;
                cout << "4. Kebutuhan Rumah Tangga" << endl;
                cout << "5. Kembali Ke Menu Utama" << endl;
                cout << "Pilih Produk (1-5): ";
                cin >> produk;

                if (produk == 1) {
                    cout << "Makanan Tersedia:" << endl;
                    cout << "1. Keripik (Rp 10.000 per pack)" << endl;
                    cout << "2. Biskuit (Rp 8.000 per pack)" << endl;
                    cout << "Masukkan Pilihan Produk: ";
                    cin >> pilihan;
                    cout << "Masukkan Jumlah: ";
                    cin >> jumlah;

                    if (pilihan == 1) {
                        harga = 10000 * jumlah;
                        totalMakanan += harga;
                    } else if (pilihan == 2) {
                        harga = 8000 * jumlah;
                        totalMakanan += harga;
                    }
                    cout << "Produk Telah Ditambahkan!" << endl;

                } else if (produk == 2) {
                    cout << "Minuman Tersedia:" << endl;
                    cout << "1. Air Mineral (Rp 5.000 per botol)" << endl;
                    cout << "2. Jus (Rp 12.000 per botol)" << endl;
                    cout << "Masukkan Pilihan Produk: ";
                    cin >> pilihan;
                    cout << "Masukkan Jumlah: ";
                    cin >> jumlah;

                    if (pilihan == 1) {
                        harga = 5000 * jumlah;
                        totalMinuman += harga;
                    } else if (pilihan == 2) {
                        harga = 12000 * jumlah;
                        totalMinuman += harga;
                    }
                    cout << "Produk Telah Ditambahkan!" << endl;

                } else if (produk == 3) {
                    cout << "Produk Kebersihan Tersedia:" << endl;
                    cout << "1. Sabun Mandi (Rp 7.000 per buah)" << endl;
                    cout << "2. Shampo (Rp 15.000 per botol)" << endl;
                    cout << "Masukkan Pilihan Produk: ";
                    cin >> pilihan;
                    cout << "Masukkan Jumlah: ";
                    cin >> jumlah;

                    if (pilihan == 1) {
                        harga = 7000 * jumlah;
                        totalKebersihan += harga;
                    } else if (pilihan == 2) {
                        harga = 15000 * jumlah;
                        totalKebersihan += harga;
                    }
                    cout << "Produk Telah Ditambahkan!" << endl;

                } else if (produk == 4) {
                    cout << "Kebutuhan Rumah Tangga Tersedia:" << endl;
                    cout << "1. Sabun Cuci Piring (Rp 4.000 per pack)" << endl;
                    cout << "2. Deterjen (Rp 20.000 per pack)" << endl;
                    cout << "Masukkan Pilihan Produk: ";
                    cin >> pilihan;
                    cout << "Masukkan Jumlah: ";
                    cin >> jumlah;

                    if (pilihan == 1) {
                        harga = 4000 * jumlah;
                        totalRumahTangga += harga;
                    } else if (pilihan == 2) {
                        harga = 20000 * jumlah;
                        totalRumahTangga += harga;
                    }
                    cout << "Produk Telah Ditambahkan!" << endl;

                } else if (produk != 5) {
                    cout << "Pilihan Tidak Valid!" << endl;
                }

            } while (produk != 5);

        } else if (pilihan == 2) {
            cout << "Total Harga Per Kategori:" << endl;
            cout << "Makanan : Rp " << totalMakanan << endl;
            cout << "Minuman : Rp " << totalMinuman << endl;
            cout << "Produk Kebersihan : Rp " << totalKebersihan << endl;
            cout << "Kebutuhan Rumah Tangga : Rp " << totalRumahTangga << endl;

        } else if (pilihan == 3) {
            hargaTotal = totalMakanan + totalMinuman + totalKebersihan + totalRumahTangga;
            if (hargaTotal >= 100000) {
                diskon = hargaTotal * 0.1; // Diskon 10%
            } else {
                diskon = 0;
            }
            cout << "Total Harga Pembelian : Rp " << hargaTotal << endl;
            cout << "Diskon : Rp " << diskon << endl;
            cout << "Total Harga Setelah Diskon : Rp " << hargaTotal - diskon << endl;

        } else if (pilihan == 4) {
            cout << "Terima Kasih Telah Berbelanja" << endl;

        } else {
            cout << "Pilihan Tidak Valid, Silahkan Coba Lagi." << endl;
        }

    } while (pilihan != 4);

    return 0;
}