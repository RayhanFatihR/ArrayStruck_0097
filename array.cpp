#include <iostream>
using namespace std;

//deklarasikan array tanpa ukuran, tetapi wajib mengisikan data
int nilai[] = {2,5,9,10,34};
//deklarasikan array dengan ukuran dan diberikan nilai awal
int skor[5] = {8, 12, 18, 6};
//deklarasikan array dengan ukuran dan tindakan ada nilai awal
string nama[3];

int main(){
    cout << "Skor ke 3 = " << skor[2] << endl;
    skor[2] = 25;
    cout << "Skor ke 3 = " << skor[2] << endl;

    for(int i = 0; i < 3; i++){
        cout << "Nama Mahasiswa ke-" << i+1 << "=";
        cin >> nama[i]
    }

    cout << endl;
    for (int i = 0; i < 3; i++){
        cout << "Data Mahasiswa ke-" << i+1 << "=" << nama[i];
        << endl;
    }
}
