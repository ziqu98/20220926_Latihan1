#include <iostream>

using namespace std;

string namaDpn = "Gamma";
string namaTgh = "Rizquha";
string namaBlk = "Wiradisastra";

int tgl = 12;
int bln = 2;
int thn = 1998;

string jln = "Jalan Setra Dago I No.2";
string rt = "RT 05";
string rw = "RW 07";
string kel = "Antapani Kulon";
string kec = "Antapani";
string kota = "Bandung";
string prov = "Jawa Barat";

int anakX = 2;
int jmlSdr = 2;

void biodata(){
  cout << "BIODATA" << endl;
  cout << "--------------------------------------------" << endl;
  cout << "Nama Lengkap   : " << namaDpn << " " << namaTgh << " " << namaBlk << endl;
  cout << "Tanggal Lahir  : " << tgl << "/" << bln << "/" << thn << endl;
  cout << "Alamat Lengkap : " << jln << ", " << rt << ", " << rw << ", " << kel << ", " << kec << ", " << kota << ", " << prov << endl;
  cout << "Anak ke-" << anakX << " dari " << jmlSdr << " bersaudara" << endl;
}

void debug(){
  cout << endl;
  cout << "DEBUG" << endl;
  cout << "--------------------------------------------" << endl;

  cout << "Nama Depan     : " << namaDpn << endl;
  cout << "Nama Tengah    : " << namaTgh << endl;
  cout << "Nama Belakang  : " << namaBlk << endl;
  cout << "Nama Lengkap   : " << namaDpn << " " << namaTgh << " " << namaBlk << endl;
  cout << endl;

  cout << "Tanggal Lahir  : " << tgl << endl;
  cout << "Bulan Lahir    : " << bln << endl;
  cout << "Tahun Lahir    : " << thn << endl;
  cout << "Tanggal Lahir  : " << tgl << "/" << bln << "/" << thn << endl;
  cout << endl;

  cout << "Jalan          : " << jln << endl;
  cout << "RT             : " << rt << endl;
  cout << "RW             : " << rw << endl;
  cout << "Kelurahan      : " << kel << endl;
  cout << "Kecamatan      : " << kec << endl;
  cout << "Kota           : " << kota << endl;
  cout << "Provinsi       : " << prov << endl;
  cout << "Alamat Lengkap : " << jln << ", " << rt << ", " << rw << ", " << kel << ", " << kec << ", " << kota << ", " << prov << endl;
  cout << endl;

  cout << "Anak ke-       : " << anakX << endl;
  cout << "Jumlah Saudara : " << jmlSdr << endl;
  cout << "Anak ke-" << anakX << " dari " << jmlSdr << " bersaudara" << endl;
}

int main() {
  biodata();
  debug();
}

// bikin biodata
  // nama depan
  // nama tengah
  // nama belakang
  // debug --> nama depan, nama tengah, nama belakang
  
  // tanggal lahir
  // bulan lahir
  // tahun lahir
  // debug --> tanggal, bulan, tahun

  // alamat
  // jalan
  // RT
  // RW
  // kelurahan
  // kecamatan
  // kota/kabupaten
  // provinsi
  // debug --> jalan, rt, rw, kelurahan, kecamatan, provinsi

  //anak ke-
  //jumlah saudara
  //debug --> anak ke-, jumlah saudara