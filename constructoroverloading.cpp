#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{
    private:
    int nim;
    string nama;
    public:
    Mahasiswa();
    Mahasiswa(int);
    Mahasiswa(string);
    Mahasiswa(int iNim, string iNama);
    void cetak();
};
Mahasiswa::Mahasiswa(){
}

Mahasiswa::Mahasiswa(int iNim){
    nim = iNim; //definisi hanya NIM
}

Mahasiswa::Mahasiswa(string iNama){
    nama = iNama; //definisi hanya Nama
}

Mahasiswa::Mahasiswa(int iNim, string iNama){
    nim = iNim; //definisi NIM dan Nama
    nama = iNama;
}

