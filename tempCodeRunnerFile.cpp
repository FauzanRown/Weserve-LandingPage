#include <iostream>
#include <string>

using namespace std;

int main() {
    // Deklarasi variabel untuk menyimpan data
    string nama, nik, tempatLahir, alamat, agama, pekerjaan;
    int tanggalLahir, bulanLahir, tahunLahir;

    // Input data
    cout << "Masukkan data KTP/SIM Anda:" << endl;
    cout << "Nama Lengkap: ";
    getline(cin, nama);
    cout << "NIK: ";
    cin >> nik;
    // ... (input data lainnya)

    // Tampilan KTP/SIM (sesuaikan dengan format KTP/SIM Anda)
    cout << "==========================================" << endl;
    cout << "             REPUBLIK INDONESIA" << endl;
    cout << "             KARTU TANDA PENDUDUK" << endl;
    cout << "==========================================" << endl;
    cout << "Nama Lengkap     : " << nama << endl;
    cout << "NIK               : " << nik << endl;
    // ... (tampilkan data lainnya)
    cout << "==========================================" << endl;

    return 0;
}