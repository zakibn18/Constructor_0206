#include <iostream>
using namespace std;

class Mahasiswa
{
private:
  static int totalMahasiswa;

public:
  string nama;
  string status;
  int usia;

  Mahasiswa(string pNama, int pUsia) // konstruktor
  {
    nama = pNama;
    usia = pUsia;
    status = "Mahasiswa Baru";
    ++totalMahasiswa;
    cout << nama << " Dibuat " << "Status " << status << endl;

    cout << endl;
  }

  ~Mahasiswa() //  destruktor tidak bisa mempunyai paramater
  {
    cout << nama << " Dihancurkan" << endl;
    --totalMahasiswa;
    cout << endl;
  }

  static int getTotalMahasiswa()
  {
    return totalMahasiswa;
  }

  static void setTotalMahasiswa(int a)
  {
    totalMahasiswa = a;
  }
};

int Mahasiswa::totalMahasiswa = 0;

int main()
{
  cout << "Total mahasiswa adalah : " << Mahasiswa::getTotalMahasiswa() << endl;

  Mahasiswa mhs1("Maman", 40);
  Mahasiswa mhs2("Agus", 99);

  Mahasiswa::setTotalMahasiswa(10);
  
  cout << "Total mahasiswa adalah : " << Mahasiswa::getTotalMahasiswa() << endl;
  {
    Mahasiswa mhs3("Suga", 50);
    Mahasiswa mhs4("Budi", 1);
    cout << "Total mahasiswa adalah : " << Mahasiswa::getTotalMahasiswa() << endl;
  }

  cout << "Total mahasiswa adalah : " << Mahasiswa::getTotalMahasiswa() << endl;
  return 0;
}