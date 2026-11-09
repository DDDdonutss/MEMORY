#111
raw_data = "   SENSOR_SUHU_ALAT_01:OK   "
hapus_spasi = raw_data.strip()
huruf_kecil = hapus_spasi.lower()
ganti_huruf = huruf_kecil.replace(':','=')
cek_awal_huruf = ganti_huruf.startswith('sensor')
print(huruf_kecil)
print(ganti_huruf)
print(cek_awal_huruf)
#222
nomor_registrasi = "UTBK-2026-TEKNIK-099"
pemecahan_kata = nomor_registrasi.split('-')
ambil_2_kata = pemecahan_kata[-2:]
gabungkan = '_'.join(ambil_2_kata)
print(gabungkan)
#333 
x = "STATUS_AMBLESAN_LEVEL_2_KATEGORI_2"
cek_indeks = x.find('2')
cek_total_elemen = x.count('_')
cek_akhiran = x.endswith('KATEGORI_2')
y = cek_indeks,cek_total_elemen,cek_akhiran
print(y)
#444
total_detik = 3725
total_jam = total_detik / 3600
sisa_detik = round((total_detik % 3600))
hasil = f'{round(total_jam,2)} jam dan {sisa_detik} detik.'
print(hasil)
