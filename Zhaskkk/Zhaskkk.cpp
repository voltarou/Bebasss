#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
    const int id;
    string nama;
    float nilai;


public:
    mahasiswa(int pId, string pNama, float pNilai) :id(pId), nama(pNama) {

    }
    ~mahasiswa() {
        cout << "Id =" << id << endl;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}


