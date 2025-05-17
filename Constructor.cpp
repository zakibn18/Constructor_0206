#include <iostream>
using namespace std;

class buku
{
  private:
    string judul;
    string penulis;
    bool pinjam;

    friend class petugas;

};

class peminjam
{
  private:
    int totalPinjam;

  public:
    string nama;
    string idPeminjam;

    friend class petugas;
};

class petugas
{
  private:
    string nama;
    string idPetugas;
    string levelAkses;
  
    public:
     friend class admin;
};

class admin
{
  
};

int main()
{

}