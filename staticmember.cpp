#include <iostream>
using namespace std;

class Mahasiswa { // membuat class Mahasiswa

public:
    static int nim; // deklarasi variabel static yaitu variabel nim 
    //deklarasi variabel member
    int id;
    string nama;

    //deklarasi prosedur setID() dan printAll()
    void setID();
    void printAll();

//pembuatan constructor mahasiswa dengan parameter pnama
    Mahasiswa(string pnama) : nama(pnama) {
        setID();
    }
};

//memberi value ke variabel nim dari class Mahasiswa
int Mahasiswa::nim = 10;

//mengimplementasikan prosedur - prosedur di luar class
void Mahasiswa::setID() {
    id = nim++; 
};

void Mahasiswa::printAll() {

    cout << "ID: " << id << ", Nama: " << nama << endl;
    cout << "Nama : " << nama << endl;
    cout << endl;
};

int main() {
    //membuat objek dan memberi nilai
    Mahasiswa mhs1("Lia Kurnia");
    Mahasiswa mhs2("Asroni");
    Mahasiswa mhs3("Andi Kurniawan");
    Mahasiswa mhs4("Joko Purba");

    //memanggil prosedur printAll() 
    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();

    return 0;
}