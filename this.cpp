#include <iostream>
using namespace std;

class buku
{

    string judul;

public:
    string setget (string judul)
    {
        this->judul = judul; //nilai parameter
        return this->judul;
    }
};

int main()
{
    buku bukunya;
    cout << "Judul Buku : " << bukunya.setget("Matematika");
    return 0;
}
