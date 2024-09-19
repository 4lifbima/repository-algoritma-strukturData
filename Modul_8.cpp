#include <iostream>
#include <algorithm> // Untuk fungsi sort
using namespace std;

struct Mahasiswa {
    int nim;
    string nama;
    string alamat;
    string kelas;
    double nilai;
};

void Cari_ind(Mahasiswa d[], int n, string k) {
    int i, posisilinear, ketemulinear;
    if (n <= 0)
        posisilinear = -1;
    else {
        ketemulinear = 0;
        i = 0;
        while ((i < n) && !ketemulinear) {
            if (d[i].nama == k) {
                posisilinear = i;
                ketemulinear = 1;
                cout << "Data (Linear) ditemukan pada baris ke-" << posisilinear << endl;
                cout << "Dengan Data Sebagai Berikut:" << endl;
                cout << "Nim : " << d[i].nim << ", Nama : " << d[i].nama << ", Alamat : " << d[i].alamat << ", Kelas : " << d[i].kelas << ", Nilai : " << d[i].nilai << endl;
            } else {
                i = i + 1;
            }
        }
        if (!ketemulinear) {
            posisilinear = -1;
            cout << "Data (Linear) tidak ditemukan." << endl;
        }
    }
}

int binarySearch(const Mahasiswa arr[], int bwh, int atas, string target) {
    while (bwh <= atas) {
        int mid = bwh + (atas - bwh) / 2;
        if (arr[mid].nama == target) {
            cout << "Data (Binary) ditemukan pada baris ke-" << mid << endl;
            cout << "Dengan Data Sebagai Berikut:" << endl;
            cout << "Nim : " << arr[mid].nim << ", Nama : " << arr[mid].nama << ", Alamat : " << arr[mid].alamat << ", Kelas : " << arr[mid].kelas << ", Nilai : " << arr[mid].nilai << endl;
            return mid;
        } else if (arr[mid].nama < target) {
            bwh = mid + 1;
        } else {
            atas = mid - 1;
        }
    }
    cout << "Data (Binary) tidak ditemukan." << endl;
    return -1;
}

int main() {
    string dtcr;
    const int mhs = 5;
    Mahasiswa data[mhs] = {
        {531423005, "agung", "Jl.jend.pol Kota Gorontalo", "A", 91.5},
        {531423016, "ali", "Jl.Ipilo Kota Gorontalo", "B", 78.2},
        {531423003, "zul", "Jl. Ampi No. 7", "C", 80.0},
        {531423021, "nabila", "Jl. Mangga No. 3", "D", 79.8},
        {531423009, "dhimaz", "Jl.jeruk No. 15", "E", 88.7}
    };

    sort(data, data + mhs, [](const Mahasiswa &a, const Mahasiswa &b) {
        return a.nama < b.nama;
    });

    cout << "Data mahasiswa setelah diurutkan berdasarkan nama:" << endl;
    for (int i = 0; i < mhs; i++) {
        cout << "NIM : " << data[i].nim << ", Nama : " << data[i].nama << ", Alamat : " << data[i].alamat << ", Kelas : " << data[i].kelas << ", Nilai : " << data[i].nilai << endl;
    }
    cout << endl;
    cout << "Masukkan nama mahasiswa yang ingin dicari: ";
    cin >> dtcr;
    binarySearch(data, 0, mhs - 1, dtcr);
    Cari_ind(data, mhs, dtcr);

    return 0;
}
