#include <iostream>
using namespace std;

class dosen{
    public:
    string nama;
    void tampilNama(){
        cout << "Namanya adalah " << nama << endl ;
    }
};
class Staf{
    public:
    int nidn;
};
int main (){
    Dosen ds;
    ds.nama = "Giga";
    ds.tampilNama();

    dosen &dsref = ds;
    dsref.nama = "Joko";
    cout << "Alamatnya memori = " << &dsref << endl;
    dsref.tampilNama();

    dosen *pds = &ds;
    pds->nama = "Reza";
    cout << "Alamatnya memori" << pds << endl;
    pds->tampilNama();
}