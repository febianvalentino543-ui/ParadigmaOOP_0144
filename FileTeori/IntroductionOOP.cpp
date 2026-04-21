#include <iostream>
using namespace std;

class Mahasiswa {//Blue print atau cetakan
public:
    int nim;
    string nama;
    float nilai;

    void printData() {
        cout << "NIM: " << nim << endl;
