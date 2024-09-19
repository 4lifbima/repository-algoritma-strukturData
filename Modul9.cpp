#include <iostream>
#include <algorithm>
using namespace std;
struct Pegawai{
    int NIK;
    string nm;
    string almt;
    string jabtn;
    double gj;
};
bool tampil( Pegawai &a, Pegawai &b) {
    return a.NIK < b.NIK;
}
int main() {
    int jumlah = 4;
    Pegawai data[jumlah] = {
        {1234, "Alif  ", "Jl. Zainal ", "Devloper  ", 550000},
        {1567, "Agung ", "Jl. Jeruk  ", "Designer  ", 350000},
        {1689, "Teguh ", "Jl. Kaltim ", "Programer ", 490000},
        {1897, "Tono  ", "Jl. Ampi   ", "Manager   ", 540000}
    };
    sort(data ,data+ jumlah, tampil);
    cout<<endl;
    cout<<endl;
    cout << "------------------------------------------------------------"<<endl;
    cout << "                         Data Pegawai                      "<<endl;
    cout << "------------------------------------------------------------"<<endl;
    cout << "NIK       Nama        Alamat          Jabatan         Gaji "<<endl;
    cout << "------------------------------------------------------------"<<endl;

    for (int i = 0; i < jumlah; ++i) {
        cout << data[i].NIK << "      " << data[i].nm << "      "<< data[i].almt << "     " << data[i].jabtn << "      "<< data[i].gj << endl;
    }
    cout << "------------------------------------------------------------"<<endl;
}
