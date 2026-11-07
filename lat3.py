suhu = [-3, 5, 0, -12, 8, 15, -1, 22]

# Mencari nilai 0
if 0 in suhu:
    print("Nilai 0 ditemukan")
else:
    print("Nilai 0 tidak ditemukan")

# Filter suhu positif
suhu_positif = []

for x in suhu:
    if x > 0:
        suhu_positif.append(x)

print("Suhu positif:", suhu_positif)