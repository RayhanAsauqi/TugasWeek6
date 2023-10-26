#include <iostream>
#include <cmath>

using namespace std;

// fungsi untuk menghitung nilai lingkaran
double hitung_luas_lingkaran(double r)
{
    return M_PI * pow(r, 2);
}

// fungsi untuk menghitung nilai keliling lingkaran
double hitung_keliling_lingkaran(double radius)
{
    return 2 * M_PI * radius;
}

// fungsi untuk menghitung jarak tempuh
double hitung_jarak_tempuh(double kecepatan, double waktu)
{
    return kecepatan * waktu;
}




// fungsi untuk mencetak menu
void CetakMenu()
{
    cout << "Nama :120103041-Rayhan Alsauqi"<< endl;
    cout << "versi program: Cetak Menu" << endl;
    cout << "Tanggal Pembuatan : 25 oktober 2023 " << endl;
    cout << "Tanggal Revisi : - " << endl;
    cout << "=============================" << endl;
    cout << "Pilihan proses yang ingin dikerjakan : " << endl;
    cout << "1. Menghitung luas lingkaran" << endl;
    cout << "2. Menghitung keliling lingkaran" << endl;
    cout << "3. Menghitung jarak tempuh" << endl;
    cout << "4. Stop" << endl;
    cout << "Pilihan anda : " ;
}

int main()
{
    int pilihan;
    do
    {
        CetakMenu();    // Mencetak menu
        cin >> pilihan; // menerima input pilihan

        // melakukan pengkondisian untuk memilih menu
        switch (pilihan)
        {
        case 1:
        {
            double radius;
            cout << "Masukkan radius lingkaran : ";      // Menerima input radius
            cin >> radius;                               // Menerima input radius
            double luas = hitung_luas_lingkaran(radius); // Memanggil fungsi hitung_luas_lingkaran
            cout << "Luas lingkaran: " << luas << endl;  // Mencetak hasil
            break;
        }
        case 2:
        {
            double radius;
            cout << " Masukkan radius lingkaran : ";             // Menerima input radius
            cin >> radius;                                       // Menerima input radius
            double keliling = hitung_keliling_lingkaran(radius); // Memanggil fungsi hitung_keliling_lingkaran
            cout << "Keliling lingkaran: " << keliling << endl;  // Mencetak hasil
            break;
        }
        case 3:
        {
            double kecepatan, waktu;
            cout << "Masukkan kecepatan (km/jam) : ";             // Menerima input kecepatan
            cin >> kecepatan;                                     // Menerima input kecepatan
            cout << "Masukkan waktu (jam) : ";                    // Menerima input waktu
            cin >> waktu;                                         // Menerima input waktu
            double jarak = hitung_jarak_tempuh(kecepatan, waktu); // Memanggil fungsi hitung_jarak_tempuh
            cout << "Jarak tempuh: " << jarak << "km" << endl;    // Mencetak hasil
            break;
        }
        case 0:
        {
            cout << "Program berhenti." << endl; // Mencetak pesan program berhenti
            break;
        default:
            cout << "Pilihan tidak valid. Silahkan pilih lagi." << endl; // Mencetak pesan pilihan tidak valid
        }
        }
    } while (pilihan != 0); // Melakukan perulangan selama pilihan tidak sama dengan 0
    return 0;
}