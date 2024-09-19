#include <iostream>

using namespace std;
int main()
{
    cout << "Input Data     : " << endl;

    string nim, nama, hobi, tlpn;

    cout << "NIM            : ";
    getline(cin, nim);

    cout << "Nama mahasiswa : ";
    getline(cin, nama);

    cout << "Hobi           : ";
    getline(cin, hobi);

    cout << "No. Telepon    : ";
    getline(cin, tlpn);

    cout << endl;

    cout << "Biodata Mahasiswa "        <<endl;
    cout << "----------------------"    <<endl;
    cout << "NIM            : "   << nim   <<endl;
    cout << "Nama           : "   << nama  <<endl;
    cout << "Hobi           : "   << hobi  <<endl;
    cout << "No. Telepon    : "   << tlpn  <<endl;
    cout << "----------------------"    <<endl;

    cout << endl;
    return 0;
}
