/*
Saya Nama Roshan Syalwan Nurilham [2203142] mengerjakan 
Latihan 1 DPBO
dalam mata kuliah 
DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
*/

#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
    int id;
    string name;
    string bidang;
    string partai;
public:
    Human(){
        this->id =-1;
        this->name ="";
        this->bidang ="";
        this->partai ="";
    }

    Human(int id, string name, string bidang, string partai){
        this->id = id;
        this->name = name;
        this->bidang =bidang;
        this->partai =partai;
    }    

    int get_id(){
        return this->id;
    }

    void set_id(int id){
        this->id=id;
    }

    string get_name(){
        return this->name;
    }

    void set_name(string name){
        this->name=name;
    }

    string get_bidang(){
        return this->bidang;
    }

    void set_bidang(string bidang){
        this->bidang=bidang;
    }

    string get_partai(){
        return this->partai;
    }

    void set_partai(string partai){
        this->partai=partai;
    }

    // void eat(){
    //     cout << this->name << " is eating! " << '\n';
    // }

    // void sleep(){
    //     cout << this->name << " is sleeping! " << '\n';
    // }    

    ~Human(){}
};
