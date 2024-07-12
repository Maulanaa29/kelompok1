#include <iostream>
#include <string>

using namespace std;

// Definisi struktur Siswa untuk menyimpan data siswa
struct Siswa {
    string nama;      // Nama siswa
    int NilaiTugas;   // Nilai tugas siswa
    int NilaiKuis;    // Nilai kuis siswa
    int NilaiUjian;   // Nilai ujian siswa
};

// Fungsi untuk menghitung nilai akhir siswa
float Hitung_Nilai_Akhir(Siswa siswa) {
    return (siswa.NilaiTugas * 0.3) + (siswa.NilaiKuis * 0.2) + (siswa.NilaiUjian * 0.5);
}

// Fungsi untuk menghitung dan menampilkan rata-rata bobot nilai siswa
void Hitung_RataRata_Bobot(Siswa siswa) {
    float RataRataBobot = (siswa.NilaiTugas + siswa.NilaiKuis + siswa.NilaiUjian) / 3.0;
    cout << "Rata-Rata Bobot " << siswa.nama << " Adalah " << RataRataBobot << endl;
}

// Fungsi untuk menentukan apakah siswa lulus berdasarkan nilai akhir
void Hitung_Ambang_Nilai(Siswa siswa, float NilaiAkhir) {
    float AmbangNilai = 60; // Ambang nilai kelulusan
    if (NilaiAkhir >= AmbangNilai) {
        cout << siswa.nama << " Lulus dengan Nilai " << NilaiAkhir << endl;
    } else {
        cout << siswa.nama << " Tidak Lulus dengan Nilai " << NilaiAkhir << endl;
    }
}

int main() {
    char lanjut; // Variabel untuk menyimpan pilihan pengguna apakah ingin melanjutkan input data siswa

    // Perulangan untuk input data beberapa siswa
    do {
        Siswa siswa;
        // Input data siswa
        cout << "Masukkan Nama Siswa: ";
        getline(cin, siswa.nama); 
        cout << "Masukkan Nilai Tugas: ";
        cin >> siswa.NilaiTugas;
        cout << "Masukkan Nilai Kuis: ";
        cin >> siswa.NilaiKuis;
        cout << "Masukkan Nilai Ujian: ";
        cin >> siswa.NilaiUjian;

        cin.ignore(); // Membersihkan buffer input

        // Hitung nilai akhir siswa
        float NilaiAkhir = Hitung_Nilai_Akhir(siswa);
        cout << "Nilai Akhir " << siswa.nama << " Adalah: " << NilaiAkhir << endl;

        // Hitung rata-rata bobot nilai siswa
        Hitung_RataRata_Bobot(siswa);

        // Tentukan apakah siswa lulus atau tidak
        Hitung_Ambang_Nilai(siswa, NilaiAkhir);

        // Tanya pengguna apakah ingin melanjutkan input data siswa lain
        cout << "Apakah Anda Ingin Melanjutkan input data siswa yang lain? (y/n): ";
        cin >> lanjut;
        cin.ignore(); // Membersihkan buffer input
    } while (lanjut == 'y' || lanjut == 'Y'); // Lanjutkan perulangan jika pengguna memilih 'y' atau 'Y'

    return 0; // Akhiri program
}