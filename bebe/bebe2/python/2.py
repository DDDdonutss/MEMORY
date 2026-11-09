#111
nama_acak = "   pAnJi geMilang  "
nama_peserta_utbk = nama_acak.strip().title()
print(nama_peserta_utbk)

#222

teks = "fakultas kedokteran ITB sangat menantang"
teks2 =teks.replace('kedokteran','teknik').upper().isupper()
print(teks2)
info = "Fokus-Lolos-UTBK-2026"
info2 = info.split('-')
new_info =  ''.join(info2)
print(new_info)

#444

Raw_Data = "ITB_2026_Pertambangan"
check_data = Raw_Data.startswith('ITB')
check_data2 = Raw_Data.endswith('Pertambangan')
cari_angka = Raw_Data.find('2')
cari_simbol = Raw_Data.count('_')
board = f'{check_data}\n{check_data2}\n{cari_simbol}\n{cari_angka}'
print(board)


