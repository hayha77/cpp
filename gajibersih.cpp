#include <iostream>
using namespace std;
int main()
{
    char16_t Nama; //nama string//
    long double GajiPokok, Tunjangan, GajiBersih, Pajak, GajiPokokdanTunjangan;
    long double PersenTunjangan=0.2, PersenPajak=0.15;
    cout <<"Masukan Nama : ";
    cin >> Nama;
    cout <<"Masukan Gaji Pokok : ";
    cin >> GajiPokok;
    Tunjangan = PersenTunjangan * GajiPokok;
    GajiPokokdanTunjangan = GajiPokok + Tunjangan;
    Pajak = PersenPajak * GajiPokokdanTunjangan;
    GajiBersih = GajiPokok + Tunjangan - Pajak;
    cout <<"Gaji bersih dari" <<Nama <<" adalah " << GajiBersih;
    }
