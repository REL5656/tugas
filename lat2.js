let produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"];

// Mencari produk Keyboard
if (produk.includes("Keyboard")) {
    console.log("Produk Keyboard ditemukan");
} else {
    console.log("Produk Keyboard tidak ditemukan");
}

// Filter nama produk lebih dari 5 karakter
let produk_filter = [];

for (let x of produk) {
    if (x.length > 5) {
        produk_filter.push(x);
    }
}

console.log("Produk dengan nama lebih dari 5 karakter:", produk_filter);