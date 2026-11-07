produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"]

# Mencari produk Keyboard
if "Keyboard" in produk:
    print("Produk Keyboard ditemukan")
else:
    print("Produk Keyboard tidak ditemukan")

# Filter nama produk lebih dari 5 karakter
produk_filter = []

for x in produk:
    if len(x) > 5:
        produk_filter.append(x)

print("Produk dengan nama lebih dari 5 karakter:", produk_filter)