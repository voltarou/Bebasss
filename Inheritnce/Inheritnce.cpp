#include <iostream>
#include <string>
using namespace std;

class Orang {
public:
    string nama;

    Orang(string pNama) : nama(pNama) {
        cout << "Orang dibuat\n" << endl;
    }

    ~Orang() {
        cout << "Orang dihapus\n" << endl;
    }

    int jumlah(int a, int b) {
        return a + b;
    }
};

class Pelajar : public Orang {
public:
    string sekolah;

    Pelajar(string pNama, string pSekolah) : Orang(pNama), sekolah(pSekolah) {
        cout << "Pelajar dibuat\n" << endl;
    }

    ~Pelajar() {
        cout << "Pelajar dihapus\n" << endl;
    }

    string perkenalan() {
        return "Halo, nama saya " + nama + " dari sekolah " + sekolah + "\n";
    }
};

int main() {
    Pelajar siswa1("Andi Laksmono", "SMAN 1 Bantul");
    cout << siswa1.perkenalan();

    cout << "Hasil = " << siswa1.jumlah(10, 90) << endl;

    return 0;
}