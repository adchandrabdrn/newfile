#include <iostream>
using namespace std;
int main() 
{
    double nilai;

    cout << "=== Program Penentuan Hasil Nilai Praktik ===" << endl;
    cout << "Masukkan nilai angka  : ";
    cin >> nilai;
    cout << "\nHasil :" << endl;

    if (nilai > 90) {
        cout << "Nilai Praktik : A" << endl;
        cout << "Kelazz king, Pertahankan yaa" << endl;
    }
    else if (nilai > 70 && nilai <= 89) {
        cout << "Nilai Praktik: B" << endl;
        cout << "Baguss jangan lupa lebih giat" << endl;
    }
    else if (nilai > 60 && nilai <= 69) {
        cout << "Nilai Praktik : C" << endl;
        cout << "Cakep tambahin belajarnya " << endl;
    }
    else if (nilai > 51 && nilai <= 59) {
        cout << "Nilai Praktik : D" << endl;
        cout << "Deerrr lebih serius" << endl;
    }
    else if (nilai <= 50) {
        cout << "Nilai mutu : E" << endl;
        cout << "E Nya Apa??, Ealahslur:) " << endl;
    }

    return 0;
}