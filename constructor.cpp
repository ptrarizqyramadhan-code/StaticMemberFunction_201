#include <iostream>
using namespace std;

class Mahasiswa {
public:
    Mahasiswa(); // constructor
};

Mahasiswa::Mahasiswa() {
    cout << "Constructor dipanggil!" << endl; //definisi Constructor
};

int main() {
    Mahasiswa mhs; // objek dibuat, constructor otomatis dipanggil
    return 0;
}

 
