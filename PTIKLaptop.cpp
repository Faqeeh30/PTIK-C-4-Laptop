#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct laptop {
  string brand;
  string seri;
  string processor;
  string ram;
  string rom;
  string panel;
  string daya;
  string harga;
};

void tampilkanMenu() {
  cout << "Pilih operasi yang ingin Anda lakukan:\n";
  cout << "1. Menambahkan data laptop\n";
  cout << "2. Menampilkan data laptop\n";
  cout << "3. Mengupdate data laptop\n";
  cout << "4. Menghapus data laptop\n";
  cout << "5. Keluar dari program\n";
}

void tampilkanData(const vector<laptop>& data) {
  if (data.empty()) {
    cout << "Tidak ada data laptop.\n";
    return;
  }
  cout << "Data laptop yang tersimpan:\n";
  cout << "No.\tBrend\tSerialLaptop\tProcessor\tRAM(GB)\tROM(GB)\tPanel\tDaya\tHarga(rp)\n";
  for (int i = 0; i < data.size(); i++) {
    cout << i + 1 << "\t" << data[i].brand << "\t" << data[i].seri << "\t" << data[i].processor << "\t" << data[i].ram << "\t" << data[i].rom << "\t" << data[i].panel << "\t" << data[i].daya << "\t" << data[i].harga << "\t" << "\n";
  }
}



int main() {
  
  return 0;
}
