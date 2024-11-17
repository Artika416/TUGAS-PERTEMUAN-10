#include<iostream>
#include<iomanip>

using namespace std;

// Fungsi untuk menghitung gaji pokok
int pokok(int jamKerja) {
	if (jamKerja >7){
		return 7*2000;
	}
    return jamKerja * 2000;
     
}

// Fungsi untuk menghitung uang lembur
int lembur(int jamKerja) {
    if (jamKerja > 7) {
        return (jamKerja - 7) * 3000;
    }
    return 0;
}

// Fungsi untuk menghitung uang jasa lembur
int jasaLembur(int jamKerja) {
    if (jamKerja >= 9) {
        return 3000;
    }
    return 0;
}

// Fungsi untuk menghitung uang makan
int makan(int jamKerja) {
    if (jamKerja >= 8  && jamKerja <= 10) {
        return 1500;
    } else if (jamKerja > 10) {
        return 2500;
    }
    return 0;
}

// Fungsi utama untuk menghitung total gaji
int main() {
    int jamKerja;
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jamKerja;

    int gajiPokok = pokok(jamKerja);
    int uangLembur = lembur(jamKerja);
    int uangJasaLembur = jasaLembur(jamKerja);
    int uangMakan = makan(jamKerja);

    int totalGaji = gajiPokok + uangLembur + uangJasaLembur + uangMakan;

    cout << "Gaji Pokok: " << gajiPokok << endl;
    cout << "Uang Lembur: " << uangLembur << endl;
    cout << "Uang Jasa Lembur: " << uangJasaLembur << endl;
    cout << "Uang Makan: " << uangMakan << endl;
    cout << "Total Gaji yang Diterima: " << totalGaji << endl;

    return 0;
}
