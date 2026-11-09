jam =int(input("Jam:"))
menit =int(input("Menit:"))
detik =int(input("Detik:"))
total_detik = (jam*3600) + (menit*60) + detik
while menit >= 60:
    menit -= 60
    jam += 1
while detik >= 60:
    detik -= 60
    menit +=1
if jam >= 12:
    template1 = f'{jam}:{menit}:{detik} PM'
    print(template1,'Total Detik:',total_detik)
elif jam < 12:
    template2 = f'{jam}:{menit}:{detik} AM'
    print(template2,'Total Detik:',total_detik)

