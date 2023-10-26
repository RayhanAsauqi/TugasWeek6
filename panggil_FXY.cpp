#include <iostream>
#include <cmath>

using namespace std;

// kamus
float x, y;
float z;
float FXY(float x, float y);

int main()
{
    cout << "Nama :120103041-Rayhan Alsauqi" << endl;
    cout << "versi program: Panggil FXY" << endl;
    cout << "Tanggal Pembuatan : 25 oktober 2023 " << endl;
    cout << "Tanggal Revisi : - " << endl;
    cout << "=============================" << endl;
    cout << "Ketikkan data real X: ";
    cin >> x;
    cout << "Ketikkan data real y: ";
    cin >> y;

    z = FXY(x, y);

    cout << "x^2 + 3xy - 5y + 5y + 4 = " << z << endl;

    return 0;
}

float FXY(float x, float y)
{
    return (pow(x, 2) + 3 * x * y - 5 * y + 4);
}