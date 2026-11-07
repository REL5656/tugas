nilai_siswa = [60, 85, 40, 90, 75, 50, 95]

# Mencari nilai 85
if 85 in nilai_siswa:
    posisi = nilai_siswa.index(85)
    print("Nilai 85 ditemukan pada index:", posisi)
else:
    print("Nilai 85 tidak ditemukan")

# Menyaring nilai yang lulus
nilai_lulus = []

for nilai in nilai_siswa:
    if nilai >= 75:
        nilai_lulus.append(nilai)

print("Daftar nilai yang lulus:", nilai_lulus)