#include<iostream>

using namespace std;

int main()
{
    struct mahasiswa {
        int nim;
        string nama;
        string temp_lahir;
        short tanggal;
        short bulan;
        long tahun;
        string alamat;
    } ;

    struct mahasiswa mhs = {
        531423009,
        "Alif Bima Pradana",
        "Sambiut",
        07,
        06,
        2005,
        "Jl. Dr. Zainal Sidiki, PURI TIVERA No.08"
    };

    cout << endl;
    cout << "NIM              : " << mhs.nim <<endl;
    cout << "Nama             : " << mhs.nama <<endl;
    cout << "Tempat Lahir     : " << mhs.temp_lahir <<endl;
    cout << "Tanggal lahir    : " << mhs.tanggal << "-" << mhs.bulan << "-" << mhs.tahun <<endl;
    cout << "Alamat           : " << mhs.alamat <<endl;


}
