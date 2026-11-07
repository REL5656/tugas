#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nilai_siswa = {60, 85, 40, 90, 75, 50, 95};

    // Mencari nilai 85
    bool ditemukan = false;

    for (int i = 0; i < nilai_siswa.size(); i++) {
        if (nilai_siswa[i] == 85) {
            cout << "Nilai 85 ditemukan pada index: " << i << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Nilai 85 tidak ditemukan" << endl;
    }

    // Menyaring nilai yang lulus
    vector<int> nilai_lulus;

    for (int nilai : nilai_siswa) {
        if (nilai >= 75) {
            nilai_lulus.push_back(nilai);
        }
    }

    cout << "Daftar nilai yang lulus: ";

    for (int nilai : nilai_lulus) {
        cout << nilai << " ";
    }

    return 0;
}