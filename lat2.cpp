#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> produk = {
        "Laptop", "Mouse", "Keyboard", "Monitor", "Headset"
    };

    // Mencari produk Keyboard
    bool ditemukan = false;

    for (string x : produk) {
        if (x == "Keyboard") {
            cout << "Produk Keyboard ditemukan" << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Produk Keyboard tidak ditemukan" << endl;
    }

    // Filter nama produk lebih dari 5 karakter
    vector<string> produk_filter;

    for (string x : produk) {
        if (x.length() > 5) {
            produk_filter.push_back(x);
        }
    }

    cout << "Produk dengan nama lebih dari 5 karakter: ";

    for (string x : produk_filter) {
        cout << x << " ";
    }

    return 0;
}