#include <iostream>
#include <cmath>
using namespace std;

bool prima(int n) {
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false; //
    }
    return true;
}

int main() {
    int batas, jumlahBilGanjil = 0, jumlahBilGenap = 0, jumlahBilPrima = 0;

    cout << " ANGKA BATAS TERTENTU : ";
    cin >> batas;
    cout << endl;


    cout << "BILANGAN GANJIL SAMPAI" << batas << " angka) : ";
    for (int i = 1; i <= batas; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            jumlahBilGanjil += i;
        }
    }


    cout << endl;
    cout << "Jumlah : " << jumlahBilGanjil << endl;


    for (int i = 1; i <= batas; i++) {
        if (i % 2 != 0) {

            cout << "Faktor dari " << i << " : ";
            for (int j = 1; j <= i; ++j) {
                if (i % j == 0) {
                    cout << j << " ";
                }
            }
            cout << endl;

        }
    }

    cout << endl;


    cout << "Bilangan Genap (batas sampai angka " << batas << " angka) : ";
    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            jumlahBilGenap += i;
        }
    }


    cout << endl;
    cout << "Jumlahnya : " << jumlahBilGenap << endl;

    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) {

            cout << "Faktor dari " << i << " : ";
            for (int j = 1; j <= i; ++j) {
                if (i % j == 0) {
                    cout << j << " ";
                }
            }
            cout << endl;

        }
    }

    cout << endl;


    cout << "Bilangan Prima (batas sampai angka " << batas << " angka) : ";
    for (int i = 2; i <= batas; i++) {
        if (prima(i)) {
            cout << i << " ";
            jumlahBilPrima += i;
        }
    }

    cout << endl;
    cout << "Jumlahnya : " << jumlahBilPrima << endl;

    for (int i = 2; i <= batas; i++) {
        if (prima(i)) {

            cout << "Faktor dari " << i << " : ";
            for (int j = 1; j <= i; ++j) {
                if (i % j == 0) {
                    cout << j << " ";
                }
            }
            cout << endl;

        }
    }

    return 0;
}


