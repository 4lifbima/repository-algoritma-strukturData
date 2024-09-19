#include <iostream>

using namespace std;

int main ()
{
   int jumlahanak,status,gajipokok,gajibersih,total1,total2,total3;
   float tunjanganistri=0.10,pertunjangan=0.05;

   cout << "Gaji Pokok  : ";
   cin >>gajipokok;
   cout << endl;

   cout << "Status Anda\n 1.Menikah \n 2.Belum Menikah"<<endl;
   cout << "Masukkan Pilihan : ";
   cin >>status;
   cout << endl;

   if(status == 1){
    tunjanganistri=0.10;

    cout << "Jumlah anak : ";
    cin >>jumlahanak;

    if(jumlahanak > 2){
        pertunjangan=0.10;
    }
   }else if(status == 2){
       tunjanganistri=0;
       pertunjangan=0;
       cout << "Anda tidak mendapatkan tunjangan"<<endl;

   }else{
       cout << "Pilihan anda tidak tersedia"<<endl;
   }

    total1=tunjanganistri*gajipokok;
    total2=pertunjangan*gajipokok;
    total3=total1+total2+gajipokok;

   cout <<endl;
   cout << "Tunjangan Istri = Rp"<<total1<<endl;
   cout << "Tunjangan Anak  = Rp"<<total2<<endl;
   cout << "Gaji Bersih     = Rp"<<total3<<endl;

   return 0;

}
