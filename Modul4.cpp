#include <iostream>

using namespace std;

int main()
{
    int i,jumlahmahasiswa;
    float Nilai_uts,Nilai_uas,Nilai_tugas, rata, total=0 ;
    string nama;

   cout << "Jumlah Mahasiswa : ";
   cin >> jumlahmahasiswa;

    for (i=1;i<=jumlahmahasiswa;i++){

        cout << endl;
        cout << "===========================================================" << endl;
        cout << i << ". Nama Mahasiswa : ";
        cin.ignore();getline(cin,nama);
        cout << "===========================================================" << endl;

        cout << "Masukan Nilai UTS            : ";
        cin >> Nilai_uts;
        cout << "Masukan Nilai UAS            : ";
        cin >> Nilai_uas;
        cout << "Masukan Nilai Tugas          : ";
        cin >> Nilai_tugas;

        total = Nilai_uts + Nilai_uas + Nilai_tugas;
        rata  = total/3;

        cout << endl;
        cout << "Total nilai Mahasiswa        : " << total << endl;
        cout << "Rata rata Nilai Mahasiswa    : " << rata << endl;

    }

    return 0;
}
