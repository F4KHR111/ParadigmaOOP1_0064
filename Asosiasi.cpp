#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien{
public:
    string nama;
    vector<pasien*> daftar_pasien;
    
    dokter(string pNama) :nama(pNama) {
        cout << "Dokter \""<< nama << "\" ada\n";
    }
    ~dokter(){
         cout << "Dokter \""<< nama << "\" tidak ada\n";
}
void tambahPasien(pasien*);
void cetakPasien(); 
};

