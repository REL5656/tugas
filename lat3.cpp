#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> suhu = {-3, 5, 0, -12, 8, 15, -1, 22};

    // Mencari nilai 0
    bool ditemukan = false;

    for (int x : suhu) {
        if (x == 0) {
            cout << "Nilai 0 ditemukan" << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Nilai 0 tidak ditemukan" << endl;
    }

    // Filter suhu positif
    vector<int> suhu_positif;

    for (int x : suhu) {
        if (x > 0) {
            suhu_positif.push_back(x);
        }
    }

    cout << "Suhu positif: ";

    for (int x : suhu_positif) {
        cout << x << " ";
    }

    return 0;
}