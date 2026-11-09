#111
raw_email ="  SUPPORTO_TEKNIK_PERTAMBANGAN@ITB.AC.ID  "
penghilang_spasi = raw_email.strip()
huruf_kecil = penghilang_spasi.lower()
cek_huruf_kecil =huruf_kecil.islower() 
email = {penghilang_spasi},{huruf_kecil},{cek_huruf_kecil}
print(email)

#222
hasil_pengeboran= "EMAS_TEMBAGA_EMAS_PERAK_EMAS"
banyak_kata_emas= hasil_pengeboran.count('EMAS')
urutan_kata_indeks=hasil_pengeboran.find('PERAK')
hasil = {banyak_kata_emas},{urutan_kata_indeks}
print(hasil)

#333
raw_nilai = "Matematika:90#Fisika:85#Kimia:88"
koreksi_data = raw_nilai.replace(':','=')
pemisah_karakter= koreksi_data.split('#')
gabungkan_karakter = ','.join(pemisah_karakter)
print(gabungkan_karakter)

#444
kode_peserta = "UTBK2026_PASS_999"
cek_awalan = kode_peserta.startswith('UTBK')
tiga_terakhir = kode_peserta[-3:]
dibalik = tiga_terakhir[::-1]
print(cek_awalan)
print(tiga_terakhir)
print(dibalik)
