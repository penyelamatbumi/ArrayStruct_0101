#include <iostream>
using namespace std;

int main() 
{
    // deklarasi array di sertai dengan inisialisasi
    int dataku[5] = {10, 20, 30, 40, 50};
    //deklarasi array tanpa inisialisasi
    int datamu[5];

    //cara akses (membaca atau mengabil isi array
    cout << "Isi array data kedua: " << dataku[1] << endl;
    //mengisi array
    dataku [1] = 200;
    cout << "Isi array data kedua setelah diubah: " << dataku[1] << endl;

    // mengisi data dengan perintah satu per satu
    cout << "isikan data pertama: ";
    cin >> datamu[0];
    cout << "isikan data kedua: ";
    cin >> datamu[1];
    cout << "isikan data ketiga: ";
    cin >> datamu[2];
    cout << "isikan data keempat: ";
    cin >> datamu[3];
    cout << "isikan data kelima: ";
    cin >> datamu[4];

    // menampilkan data dengan perintah satu per satu
    cout << "data pertama: " << datamu[0] << endl;
    cout << "data kedua: " << datamu[1] << endl;
    cout << "data ketiga: " << datamu[2] << endl;
    cout << "data keempat: " << datamu[3] << endl;
    cout << "data kelima: " << datamu[4] << endl;
    
    // mengisi data melalui perulangan
 for (int i = 0; i <= 4; i++)
    {
        cout << "Isikan data ke-" << (i + 1) << " : ";
        cin >> datamu[i];
    }

    // menampilkan data dengan perulangan
    for (int i = 0; i <= 4; i++)
    {
        cout << "Data ke-" << (i + 1) << " : " << datamu[i] << endl;
    }

}
#include <iostream>
#include <string>
using namespace std;

struct alamatDetail
{
    string desa;
    string kota;
};

struct mahasiswa
{
    string nama;
    alamatDetail alamat;
    int umur;
};

int main()
{
    // deklarasi variable struct
    mahasiswa mhs[3];

    // mengisi data
    for (int i = 0; i <= 2; i++)
    {cout << "Isikan data nama : ";
    getline(cin, mhs[i].nama);
    cout << "Isikan data kota : ";
    getline(cin, mhs[i].alamat.kota);
    cout << "Isikan data desa : ";
    getline(cin, mhs[i].alamat.desa);
    cout << "Isikan data usia : ";
    cin >> mhs[i].umur;
    cin.ignore();

    for (int i = 0; i <= 2; i++)
    cout <<"Data Mahasiswa" << endl;
    cout << "Nama : " << mhs[i].nama << endl;
    cout << "Kota : " << mhs[i].alamat.kota << endl;
    cout << "Desa : " << mhs[i].alamat.desa << endl;
    cout << "Usia : " << mhs[i].umur << endl;
}
}
    