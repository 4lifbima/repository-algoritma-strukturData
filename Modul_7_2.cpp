#include<iostream>
#include<iomanip>

using namespace std;
int main()
{

    int totalUnit= 0, totalHarga= 0, harrga;

    int jmlh;
    cout << "Jumlah data : ";
    cin >> jmlh;
    cout <<endl;

    struct brg {
        string kode;
        string nama;
        int unit;
        int harga;
        };

    struct brg persediaan[10];
    for(int i = 0;i<jmlh;i++){
        cout << "Data " << i+1 <<endl;
        cout << "Kode Barang : ";
        cin >> persediaan[i].kode;
        cout << "Nama        : ";
        cin >> persediaan[i].nama;
        cout << "Unit        : ";
        cin >> persediaan[i].unit;
        cout << "Harga       : ";
        cin >> persediaan[i].harga;
	   }

        cout << endl << endl;
        cout << "                                            Data Persediaan Toko XYZ" <<endl;
        cout << "===============================================================================================================" << endl;
        cout << "No" << setw(24) << "Kode Barang" << setw(17) << "Nama" << setw(19) << "Unit" << setw(19) << "Harga" << setw (21) <<  " Total" << endl;
        cout << "===============================================================================================================" << endl;
        cout << endl;
        for(int i=0; i<jmlh ;i++){
            cout << i+1 << setw(20);
            cout << persediaan[i].kode  << setw(23);
            cout << persediaan[i].nama  << "               ";
            cout << persediaan[i].unit  << "               ";
            cout << persediaan[i].harga << "               ";
            cout << persediaan[i].harga * persediaan[i].unit << "" << endl;
            harrga = persediaan[i].harga * persediaan[i].unit;
            totalHarga += harrga;
            harrga = 0;
        }
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
         for(int i=0; i<jmlh; i++){
               totalUnit += persediaan[i].unit;
         }
        cout << "Total                                                      " << totalUnit <<"                                   "<< totalHarga << endl;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;




    return 0;

}
