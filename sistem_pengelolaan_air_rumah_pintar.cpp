#include <iostream>
using namespace std;
int main ()
{
double area, keran, mesinCuci, shower, toilet, sprinkler, selang, dapur, kamarMandi, taman,
totalKonsumsiAir, biayaHarian;
int pilihan;
//Area Dapur
keran = 20*1;
mesinCuci = 10*3;
dapur = keran+mesinCuci;
//Area Kamar Mandi
shower = 8*30;
toilet = 5*8;
keran = 2*15;
kamarMandi = shower+toilet+keran;
//Area Taman
sprinkler = 50*2;
selang = 20*1;
taman = sprinkler+selang;
// Total konsumsi air
totalKonsumsiAir = dapur + kamarMandi + taman;
// Biaya harian
biayaHarian = (totalKonsumsiAir/1000*3000);
do {
cout << "Sistem Pengelolaan Air Rumah Pintar" << endl;
cout << "1. Konsumsi Air Pada Setiap Area" << endl;
cout << "2. Total Konsumsi Air Seluruh Rumah" << endl;
cout << "3. Biaya Harian Konsumsi Air" << endl;
cout << "4. Keluar" << endl;
cout << "Pilih opsi (1-4): ";
cin >> pilihan;

if (pilihan == 1) {
do {
cout << "Pilih Area :" << endl;
cout << "1. Area Dapur" << endl;
cout << "2. Area Kamar Mandi" << endl;
cout << "3. Area Taman" << endl;
cout << "4. Kembali Ke Menu Utama" << endl;
cout << "Pilih Area (1-4): ";
cin >> area;
if (area == 1) {
cout << "Konsumsi Air Pada Area Dapur:" << endl;
cout << "Keran                       :" << keran << " Liter" << endl;
cout << "Mesin Cuci              :" << mesinCuci << " Liter" << endl;
cout << "Total Konsumsi Air :" << dapur << " Liter" << endl;
} else if (area == 2) {
cout << "Konsumsi Air Pada Area Kamar Mandi:" << endl;
cout << "Shower                    :" << shower << " Liter" << endl;
cout << "Toilet                       :" << toilet << " Liter" << endl;
cout << "Keran                       :" << keran << " Liter" << endl;
cout << "Total Konsumsi Air :" << kamarMandi << " Liter" << endl;
} else if (area == 3) {
cout << "Konsumsi Air Pada Area Taman:" << endl;
cout << "Sprinkler                  :" << sprinkler << " Liter" << endl;
cout << "Selang                      :" << selang << " Liter" << endl;
cout << "Total Konsumsi Air :" << taman << " Liter" << endl;
} else if (area != 4) {
cout << "Pilihan Tidak Valid!" << endl;
}
} while (area != 4);
} else if (pilihan == 2) {
cout << "Total Konsumsi Air Seluruh Rumah : " << totalKonsumsiAir << " Liter"
<< endl;
} else if (pilihan == 3) {
cout << "Biaya Harian Konsumsi Air : Rp " << biayaHarian << endl;
} else if (pilihan == 4) {
cout << "Program Telah Selesai" << endl;
} else {
cout << "Pilihan Tidak Valid, Silahkan Coba Lagi." << endl;
}

} while (pilihan != 4);

return 0;
}