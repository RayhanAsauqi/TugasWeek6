#include <iostream>
using namespace std;

int A, B, C;

void Hitung(int &A, int B, int c);

int main()
{
    cout << "Nama :120103041-Rayhan Alsauqi" << endl;
    cout << "versi program: Panggil Hitung" << endl;
    cout << "Tanggal Pembuatan : 25 oktober 2023 " << endl;
    cout << "Tanggal Revisi : - " << endl;
    cout << "=============================" << endl;

    B = 3;
    C = 5;

    Hitung(A, B, C);
    cout << "A, B, C : " << A << " " << B << " " << C << endl;
    Hitung(C, A, B);
    cout << "A, B, C : " << A << " " << B << " " << C << endl;
    Hitung(C, B, A);
    cout << "A, B, C : " << A << " " << B << " " << C << endl;

    return 0;
}

void Hitung(int &A, int B, int C)
{
    A = 10 + B - C;
    C = C + 4;
}