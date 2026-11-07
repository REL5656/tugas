let nilai_siswa = [60, 85, 40, 90, 75, 50, 95];

// Mencari nilai 85
let posisi = nilai_siswa.indexOf(85);

if (posisi !== -1) {
    console.log("Nilai 85 ditemukan pada index:", posisi);
} else {
    console.log("Nilai 85 tidak ditemukan");
}

// Menyaring nilai yang lulus
let nilai_lulus = [];

for (let nilai of nilai_siswa) {
    if (nilai >= 75) {
        nilai_lulus.push(nilai);
    }
}

console.log("Daftar nilai yang lulus:", nilai_lulus);