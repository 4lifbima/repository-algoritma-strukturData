#include<iostream>

using namespace std;

int main() {

	int barisA, kolomA, kolomB;

	cout << "Jumlah Baris Matrik A : ";
	cin >> barisA;
	cout << "Jumlah Kolom Matrik A : ";
	cin >> kolomA;
	cout << "Jumlah Kolom Matrik B : ";
	cin >> kolomB;
	cout <<endl;

	int matriksA[barisA][kolomA];
	int matriksB[kolomA][kolomB];
	int hasil[barisA][kolomB];

	cout << "Input Nilai Matrik A : " <<endl;

	for (int i = 0; i < barisA; i++) {
            cout <<endl;
		for (int j = 0; j < kolomA; j++) {
			cout << "A(" << i+1 << ", " << j+1 << ") = ";
			cin >> matriksA[i][j];
		}
	}

    cout << endl;
	cout << "Input Nilai Matrik B : " <<endl;

	for (int i = 0; i < kolomA; i++) {
            cout <<endl;
		for (int j = 0; j<kolomB; j++) {
			cout << "B(" << i + 1 << ", " << j+ 1 << ") = ";
			cin >> matriksB[i][j];
		}
	}

	for (int i = 0; i < barisA; i++) {
		for (int j=0; j<kolomB; j++) {
			hasil[i][j] = 0;
			for (int k = 0; k < kolomA; k++) {
				hasil[i][j] += matriksA[i][k] * matriksB[k][j];
			}
		}
	}

    cout <<endl;
	cout << "Hasil Perkalian Matrik : " <<endl;

	for (int i = 0; i < barisA; i++) {
		for (int j = 0; j < kolomB; j++) {
			cout << " " << hasil[i][j]<<"\t";
		}
		cout <<endl;
	}

	return 0;
}
