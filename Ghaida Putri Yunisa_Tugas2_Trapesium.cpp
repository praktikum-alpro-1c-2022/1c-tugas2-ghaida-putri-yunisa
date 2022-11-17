#include <iostream>

using namespace std;

int main (){

    double luas;
    double a;
    double b;
    double t;

    cout << "Nama = Ghaida Putri Yunisa" << endl;
    cout << "Kelas = 1C" << endl;
    cout << "NPM =2210631170022 " << endl;
    cout << " " << endl;

    cout << "Menghitung Luas Trapesium menggunakan 0,5 * (a+b) * t " << endl;
    cout << "Masukan a = ";
    cin >> a;
    cout << "Masukan b = ";
    cin >> b;
    cout << "Masukan t = ";
    cin >> t;
    cout << " " << endl;

    luas = 0.5 * (a+b) * t;

    cout << "Luas Trapesium adalah " << luas;
    cout << " " << endl;

    return 0;

}
