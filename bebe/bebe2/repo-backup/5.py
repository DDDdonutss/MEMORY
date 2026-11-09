age = 34
sertifikat_k3 = True
shift = 'Noon'
is_supervisor = False
basic_cost = 200
if (age >= 21 and sertifikat_k3) and shift == 'Noon' or is_supervisor:
    if is_supervisor:
        biaya_apd = 0
    elif shift == 'Noon':
        biaya_apd = 50 
    else:
        biaya_apd = 20
    total_biaya = basic_cost + biaya_apd
    print(total_biaya)
    
else:
    print('akses ditolak karena batas usia.')
    
