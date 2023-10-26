#include <iostream>
using namespace std;

float r;
float Fx(float x);

int main()
{
    cout << "Nama :120103041-Rayhan Alsauqi" << endl;
    cout << "versi program: Panggil fx" << endl;
    cout << "Tanggal Pembuatan : 25 oktober 2023 " << endl;
    cout << "Tanggal Revisi : - " << endl;
    cout << "=============================" << endl;
    cout << "Ketikkan nilai data real r: ";
    cin >> r;
    cout << "2r + 4 = " << Fx(r) << endl;
    return 0;
}

float Fx(float x)
{
    float y;

    y = 2 * x + 4;
    return (y);
}