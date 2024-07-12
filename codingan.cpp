#include <iostream>
#include <string>

using namespace std;

struct Siswa {
    string nama;
    int NilaiTugas;
    int NilaiKuis;
    int NilaiUjian;
};

float Hitung_Nilai_Akhir(Siswa siswa) {
    return (siswa.NilaiTugas * 0.3) + (siswa.NilaiKuis * 0.2) + (siswa.NilaiUjian * 0.5);
}

void Hitung_RataRata_Bobot(Siswa siswa) {
    float RataRataBobot = (siswa.NilaiTugas + siswa.NilaiKuis + siswa.NilaiUjian) / 3.0;
    cout << "Rata-Rata Bobot " << siswa.nama << " Adalah " << RataRataBobot << endl;
}

void Hitung_Ambang_Nilai(Siswa siswa, float NilaiAkhir) {
    float AmbangNilai = 60;
    if (NilaiAkhir >= AmbangNilai) {
        cout << siswa.nama << " Lulus dengan Nilai " << NilaiAkhir << endl;
    } else {
        cout << siswa.nama << " Tidak Lulus dengan Nilai " << NilaiAkhir << endl;
    }
}

int main() {
    char lanjut;
    
    do {
        Siswa siswa;
        cout << "Masukkan Nama Siswa: ";
        getline(cin, siswa.nama); 
        cout << "Masukkan Nilai Tugas: ";
        cin >> siswa.NilaiTugas;
        cout << "Masukkan Nilai Kuis: ";
        cin >> siswa.NilaiKuis;
        cout << "Masukkan Nilai Ujian: ";
        cin >> siswa.NilaiUjian;

        cin.ignore();

        float NilaiAkhir = Hitung_Nilai_Akhir(siswa);
        cout << "Nilai Akhir " << siswa.nama << " Adalah: " << NilaiAkhir << endl;

        Hitung_RataRata_Bobot(siswa);
        Hitung_Ambang_Nilai(siswa, NilaiAkhir);

        cout << "Apakah Anda Ingin Melanjutkan input data siswa yang lain? (y/n): ";
        cin >> lanjut;
        cin.ignore();
    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}