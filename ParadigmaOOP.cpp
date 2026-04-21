#include <iostream>
using namespace std;

class DataBarang {//Blue print atau cetakan
public:
    string nama;
    string kategori;
    int jumlah;
    string tanggalProduksi;

    void printData() {
        cout << "Nama: " << nama << endl;
        cout << "Kategori: " << kategori << endl;
        cout << "Jumlah: " << jumlah << endl;
        cout << "Tanggal Produksi: " << tanggalProduksi << endl;   
    }
}; //batas class

int main() {
    DataBarang elektronik; //objek 
    DataBarang nonElektronik; //objek


    elektronik.nama = "Laptop";
    elektronik.kategori = "Elektronik";
    elektronik.jumlah = 5;
    elektronik.tanggalProduksi = "2023-01-01";
    elektronik.printData();

    cout << endl;

    nonElektronik.nama = "Buku";
    nonElektronik.kategori = "Non-Elektronik";
    nonElektronik.jumlah = 10;
    nonElektronik.tanggalProduksi = "2023-02-01";
    nonElektronik.printData();
}