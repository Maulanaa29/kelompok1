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
