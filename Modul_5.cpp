#include <iostream>

using namespace std;

int hitungfaktorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n*hitungfaktorial(n - 1);
}

int main()
{
    int angka,hasil;
    cout << "Masukkan angka untuk dihitung faktorialnya: ";
    cin >> angka;

    hasil = hitungfaktorial(angka);

    cout <<endl;
    cout << "Hasil faktorial dari " << angka << " adalah: " << hasil << endl;

    return 0;
}
