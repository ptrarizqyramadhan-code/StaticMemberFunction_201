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

void Mahasiswa::cetak(){

    cout << "NIM : " << nim << endl;
    cout << "Nama : " << nama << endl;
}

int main(){
    Mahasiswa mhs1 (102030);
    Mahasiswa mhs2("andi");
    Mahasiswa mhs3(010203,"Santi"); 
   
    //tampilkan nilai
    cout << "Mahasiswa 1 : "; mhs1.cetak();
    cout << "Mahasiswa 2 : "; mhs2.cetak();
    cout << "Mahasiswa 3 : "; mhs3.cetak();
    return 0;
}