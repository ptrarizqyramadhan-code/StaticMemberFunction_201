#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    private:
        int nim;
        string nama;
    public:
        mahasiswa(int Nim, string Nama); // constructor dengan parameter
}; 

//Definisi constructor dengan parameter
mahasiswa::mahasiswa(int Nim, string Nama){
    cout << "Constructor dengan parameter terpanggil" << endl;
    cout << "NIM : " << Nim << endl;
    cout << "Nama : " << Nama << endl;
}

int main(){
    mahasiswa mhs(112345, "Pascal"); //memanggil constructor dengan parameter
    return 0;
}