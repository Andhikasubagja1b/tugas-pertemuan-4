#include <iostream>
using namespace std;

int main() {
    int batasan;
    int Pertama, Kedua, hasil;

    cout << "Masukkan angka pertama  : ";
    cin >> Pertama;


    Kedua = Pertama == 0 ? 1 : Pertama;

    cout << "Ketikkan angka untuk jumlah suku dari deret fibonacci : ";
    cin >> batasan;
    cout << endl;



    cout << "Deret Fibonacci: " << Pertama << ", " << Kedua;

    for (int i = 2; i < batasan; i++) {
        hasil = Pertama + Kedua;
        cout << ", " << hasil;


        Pertama = Kedua;



        Kedua = hasil;
    }

    cout << endl;
    return 0;
}
