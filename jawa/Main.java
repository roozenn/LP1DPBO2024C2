import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Human dpr1 = new Human(1, "Hotman", "pertanian", "gerindra");
        Human dpr2 = new Human(2, "Hotman2", "pertani", "geri");
        Human dpr3 = new Human(3, "Hotman3", "tanian", "ndra");

        int i, n = 0;
        int id;
        String name;
        String bidang;
        String partai;

        List<Human> humanList = new ArrayList<>();
        humanList.add(dpr1);
        humanList.add(dpr2);
        humanList.add(dpr3);

        System.out.println("\nLIST AWAL:");
        for (Human human : humanList) {
            System.out.println(human);
        }

        // FITUR
        int stop = 0;
        Scanner scanner = new Scanner(System.in);

        while (stop == 0) {
            System.out.println("\n==================\nPILIH CUY\n1.Tambah\n2.Ubah\n3.Hapus\n4.LIAT\n5.STOP\n");

            System.out.print("\nMasukan Pilihan:");
            int idFitur = scanner.nextInt();

            if (idFitur == 1) {
                System.out.print("\nMasukan Jumlah Tmbahan:");
                n = scanner.nextInt();
                for (i = 0; i < n; i++) {
                    Human temp = new Human();

                    System.out.println("\nMasukan Data Lengkap (id >> name >> bidang >> partai) :");
                    id = scanner.nextInt();
                    name = scanner.next();
                    bidang = scanner.next();
                    partai = scanner.next();

                    temp.set_id(id);
                    temp.set_name(name);
                    temp.set_bidang(bidang);
                    temp.set_partai(partai);

                    humanList.add(temp);
                }
            } else if (idFitur == 2) {
                System.out.print("\nMasukan ID yang diubah:");
                int idUbah = scanner.nextInt();

                Iterator<Human> iterator = humanList.iterator();
                while (iterator.hasNext()) {
                    Human human = iterator.next();
                    if (human.get_id() == idUbah) {
                        System.out.println("\nMasukan Data Lengkap (id >> name >> bidang >> partai) :");
                        id = scanner.nextInt();
                        name = scanner.next();
                        bidang = scanner.next();
                        partai = scanner.next();

                        human.set_id(id);
                        human.set_name(name);
                        human.set_bidang(bidang);
                        human.set_partai(partai);
                    }
                }
            } else if (idFitur == 3) {
                System.out.print("\nMasukan ID yang dihapus:");
                int idHapus = scanner.nextInt();

                Iterator<Human> iterator = humanList.iterator();
                while (iterator.hasNext()) {
                    Human human = iterator.next();
                    if (human.get_id() == idHapus) {
                        iterator.remove();
                    }
                }
            } else if (idFitur == 4) {
                System.out.println("\nLIST:");
                for (Human human : humanList) {
                    System.out.println(human);
                }
            } else if (idFitur == 5) {
                stop = 1;
            }
        }

        System.out.println("\n=================\nHASIL AKHIR");
        for (Human human : humanList) {
            System.out.println(human);
        }

        scanner.close();
    }
}