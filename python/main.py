from PRAK1 import Human

def print_list(llist):
    print("\nLIST:")
    for human in llist:
        print(human)

# FITUR
dpr1 = Human(1, "Hotman", "pertanian", "gerindra")
dpr2 = Human(2, "Hotman2", "pertani", "geri")
dpr3 = Human(3, "Hotman3", "tanian", "ndra")

llist = [dpr1, dpr2, dpr3]

print("\nLIST AWAL:")
for human in llist:
    print(human)

stop = 0
while stop == 0:
    print("\n==================\nPILIH CUY\n1.Tambah\n2.Ubah\n3.Hapus\n4.LIAT\n5.STOP\n")

    id_fitur = int(input("\nMasukan Pilihan:"))

    if id_fitur == 1:
        n = int(input("\nMasukan Jumlah Tambah:"))
        for _ in range(n):
            id_input, name_input, bidang_input, partai_input = input("\nMasukan Data Lengkap (id name bidang partai) : ").split()
            temp = Human(int(id_input), name_input, bidang_input, partai_input)
            llist.append(temp)
    elif id_fitur == 2:
        id_ubah = int(input("\nMasukan ID yang diubah:"))
        for human in llist:
            if human.id == id_ubah:
                id_input, name_input, bidang_input, partai_input = input("\nMasukan Data Lengkap (id name bidang partai) : ").split()
                human.id = int(id_input)
                human.name = name_input
                human.bidang = bidang_input
                human.partai = partai_input
    elif id_fitur == 3:
        id_hapus = int(input("\nMasukan ID yang dihapus:"))
        llist = [human for human in llist if human.id != id_hapus]
    elif id_fitur == 4:
        print_list(llist)
    elif id_fitur == 5:
        stop = 1

print("\n=================\nHASIL AKHIR")
print_list(llist)
