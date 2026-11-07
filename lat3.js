let suhu = [-3, 5, 0, -12, 8, 15, -1, 22];

// Mencari nilai 0
if (suhu.includes(0)) {
    console.log("Nilai 0 ditemukan");
} else {
    console.log("Nilai 0 tidak ditemukan");
}

// Filter suhu positif
let suhu_positif = [];

for (let x of suhu) {
    if (x > 0) {
        suhu_positif.push(x);
    }
}

console.log("Suhu positif:", suhu_positif);