#include <iostream>
#include <string>
using namespace std;

int main() {
    while (true) {
        int n;
        string m;

        cout << "Input tinggi segitiga (angka) atau ketik 'exit' untuk keluar : ";
        getline(cin, m);
        cout << endl;

        if (m == "exit"){
            cout << "Program selesai." << endl;
            return 0;
        }


        try {
            n = stoi(m);
            if (n < 0) {
                cout << "Tak boleh angka negatif lho" << endl;
            }
        } catch (invalid_argument const &e) {
            cout << "Mohon ketik sebuah angka atau 'exit'\n" << endl;
            continue;
        }

        char bintang = '*';

        for (int i = 1; i <= n; i++) {
            for (int j = n; j >= i; j--) {
                cout << " ";
            }
            for (int k = 1; k <= i; k++) {
                cout << bintang << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

return 0;

}
