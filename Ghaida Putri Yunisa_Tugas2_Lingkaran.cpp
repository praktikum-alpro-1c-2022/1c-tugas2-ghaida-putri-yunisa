#include <iostream>

using namespace std;

int main(){

    float r;
    double phi = 3.14;

    cout << "Nama = Ghaida Putri Yunisa" << endl;
    cout << "Kelas = 1C" << endl;
    cout << "NPM =2210631170022 " << endl;
    cout << " " << endl;

    cout << "Menghitung Luas Lingkaran menggunakan phi * r pangkat 2" << endl;
    cout << "Masukan jari jari = ";
    cin >> r;
    cout << " " << endl;

    double luas = phi * r * r;

    cout << "Luas Lingkaran adalah " << luas;
    cout << " " << endl;

return 0;

}
