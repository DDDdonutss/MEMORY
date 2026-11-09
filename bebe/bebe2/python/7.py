'''
umur_manusia =  int(input("Usia anda:"))
if umur_manusia >= 60:
    print("Anda Tua")
elif umur_manusia >=18 and umur_manusia <= 50:
    print("Sudah Dewasa")
elif umur_manusia >=13 and umur_manusia <= 17:
    print("anda Anak Baru Gede")
elif umur_manusia >= 6 and umur_manusia <= 12:
    print("Masih kecik")
else:
    print("Bibit Muda Bangsa")
'''


umur_manusia = int(input("Usia anda: "))

if umur_manusia >= 60:
    print("Anda Tua")
else:
    if umur_manusia >= 18 and umur_manusia <= 50:
        print("Sudah Dewasa")
    else:
        if umur_manusia >= 13 and umur_manusia <= 17:
            print("Anda anak baru gede")
        else:
            if umur_manusia >= 6 and umur_manusia <= 12:
                print("Masih kecil")
            else:
                print("Bibit muda bangsa")