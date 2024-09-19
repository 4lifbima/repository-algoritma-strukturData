#include <iostream>

using namespace std;

int main()
{
    int sambungan,total1,total2,total3,harga;
    float ppn=0.10,admin=0.05;
    string jenispelanggan;

    cout << "Jumlah Watt             = ";
    cin >>sambungan;

    if(sambungan<=450){
        harga=650000;
        jenispelanggan="Rumah Tangga";

    }else if(sambungan<=900){
        harga=850000;
        jenispelanggan="Rumah Tangga";

    }else if(sambungan<=1200){
        harga=1200000;
        jenispelanggan="Rumah Tangga";

    }else if(sambungan<=2200){
        harga=1500000;
        jenispelanggan="Rumah Tangga";

    }else if(sambungan<=4400){
        harga=1750000;
        jenispelanggan="Rumah Tangga";

    }else if(sambungan<=9500){
        harga=2250000;
        jenispelanggan="Industri";

    }else if(sambungan<=12000){
        harga=2750000;
        jenispelanggan="Industri";

    }else if(sambungan<=16000){
        harga=3250000;
        jenispelanggan="Industri";

    }else if(sambungan<=22000){
        harga=4500000;
        jenispelanggan="Industri";

    }else{
        harga=6700000;
        jenispelanggan="Industri";
    }
        total1=ppn*harga;
        total2=admin*harga;
        total3=total1+total2+harga;

    cout << "Jenis Pelanggan         = "<<jenispelanggan<<endl<<endl;
    cout << "Harga                   = Rp"<<harga<<endl;
    cout << "Pajak Pertambahan Nilai = Rp"<<total1<<endl;
    cout << "Administrasi            = Rp"<<total2<<endl<<endl;
    cout << "Total                   = Rp"<<total3<<endl;

    return 0;

}
