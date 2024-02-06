#include <bits/stdc++.h>
#include "PRAK1.cpp"

using namespace std;

int main(){
    Human dpr1(1, "Hotman", "pertanian", "gerindra");
    Human dpr2(2, "Hotman2", "pertani", "geri");
    Human dpr3(3, "Hotman3", "tanian", "ndra");

    int i, n=0;
    int id;
    string name;
    string bidang;
    string partai;

    list<Human> llist;
    llist.push_back(dpr1);
    llist.push_back(dpr2);
    llist.push_back(dpr3);

    cout <<"\nLIST AWAL:\n";
    for (list<Human>::iterator it = llist.begin(); it!= llist.end(); it++)
    {
        cout << it->get_id() << ' ' << it->get_name() << ' ' << it->get_bidang() << ' ' << it->get_partai() << '\n';
    }

    //FITUR
    int stop=0;
    while(stop==0)
    {
        cout << "\n==================\nPILIH CUY\n1.Tambah\n2.Ubah\n3.Hapus\n4.LIAT\n5.STOP\n";
            
            cout <<"\nMasukan Pilihan:";
            int idFitur;
            cin >> idFitur;

            if(idFitur==1){
                cout <<"\nMasukan Jumlah Tmbahan:";
                cin >> n;
                for (i = 0; i < n; i++)
                {
                    Human temp;

                    cout <<"\nMasukan Data Lengkap (id >> name >> bidang >> partai) :\n";
                    cin >> id >> name >> bidang >> partai;

                    temp.set_id(id);
                    temp.set_name(name);
                    temp.set_bidang(bidang);
                    temp.set_partai(partai);

                    llist.push_back(temp);
                }
            }
            else if (idFitur==2)
            {
                int idUbah;
                cout <<"\nMasukan ID yang diubah:";
                cin >> idUbah;

                for (list<Human>::iterator it = llist.begin(); it!= llist.end(); it++)
                {
                    if (it->get_id()==idUbah)
                    {
                        cout <<"\nMasukan Data Lengkap (id >> name >> bidang >> partai) :\n";
                        cin >> id >> name >> bidang >> partai;

                        it->set_id(id);
                        it->set_name(name);
                        it->set_bidang(bidang);
                        it->set_partai(partai);
                    }
                }
            }
            else if (idFitur==3)
            {
                int idHapus;
                cout <<"\nMasukan ID yang dihapus:";
                cin >> idHapus;

                for (list<Human>::iterator it = llist.begin(); it!= llist.end(); it++)
                {
                    if(it->get_id()==idHapus){
                        it = llist.erase(it);
                    }
                }
            }
            else if (idFitur==4)
            {
                cout <<"\nLIST:\n";
                for (list<Human>::iterator it = llist.begin(); it!= llist.end(); it++)
                {
                    cout << it->get_id() << ' ' << it->get_name() << ' ' << it->get_bidang() << ' ' << it->get_partai() << '\n';
                }
            }
            else if (idFitur==5)
            {
                stop=1;
            }
    
    }

    cout <<"\n=================\nHASIL AKHIR\n";
    for (list<Human>::iterator it = llist.begin(); it!= llist.end(); it++)
    {
        cout << it->get_id() << ' ' << it->get_name() << ' ' << it->get_bidang() << ' ' << it->get_partai() << '\n';
    }

    return 0;
}