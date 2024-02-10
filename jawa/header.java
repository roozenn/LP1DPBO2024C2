import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Scanner;

class Human {
    private int id;
    private String name;
    private String bidang;
    private String partai;

    public Human() {
        this.id = -1;
        this.name = "";
        this.bidang = "";
        this.partai = "";
    }

    public Human(int id, String name, String bidang, String partai) {
        this.id = id;
        this.name = name;
        this.bidang = bidang;
        this.partai = partai;
    }

    public int get_id() {
        return this.id;
    }

    public void set_id(int id) {
        this.id = id;
    }

    public String get_name() {
        return this.name;
    }

    public void set_name(String name) {
        this.name = name;
    }

    public String get_bidang() {
        return this.bidang;
    }

    public void set_bidang(String bidang) {
        this.bidang = bidang;
    }

    public String get_partai() {
        return this.partai;
    }

    public void set_partai(String partai) {
        this.partai = partai;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + bidang + " " + partai;
    }
}