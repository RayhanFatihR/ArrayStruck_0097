#include <iostream>
using namespace std;

struct mahasiswa{
    string nim;
    string nama;
    string alamat;
};

int main(){
    mahasiswa mhs;

    mhs.nim = "20240140097";
    mhs.nama = "Rayhan";
    mhs.alamat = "Sonopakis";

    cout << "Mahasiswa NIM =";
    cin >> mhs.nim;
    cout << "Mahasiswa Nama =";
    cin >> mhs.nama;
    cout << "Mahasiswa Alamat =";
}