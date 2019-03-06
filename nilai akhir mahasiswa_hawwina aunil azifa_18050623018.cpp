// hawwina aunil azifa
// nim 18050623018
// D3 manajemen informatika 2018
// 6 maret 2019

#include<iostream>
#include<conio.h>

using namespace std;
int main ()
{
    struct data
    {
        char nama[20];
        int nim;
        int tugas;
        int kuis;
        int mid;
        int uas;
        float nilai_akhir;
    };
    struct data mahasiswa[20];

cout<<"=================================================\n";
cout<<"Program Structur Menghitung Nilai Akhir Mahasiswa\n";
cout<<"=================================================\n";
cout<<endl;
int x,y;
cout<<"Masukan jumlah Mahasiswa : ";
cin>>y;
for(x=0;x<y;x++)
{
    cout<<"Masukan Nama Mahasiswa : ";
    cin>>mahasiswa[x].nama;
    cout<<"Masukan NIM Mahasiswa  : ";
    cin>>mahasiswa[x].nim;
    cout<<"Masukan Nilai Tugas    : ";
    cin>>mahasiswa[x].tugas;
    cout<<"Masukan Nilai Kuis     : ";
    cin>>mahasiswa[x].kuis;
    cout<<"Masukan Nilai mid      : ";
    cin>>mahasiswa[x].mid;
    cout<<"Masukan Nilai UAS      : ";
    cin>>mahasiswa[x].uas;
    cout<<endl;
}

for(x=0;x<y;x++)
{
mahasiswa[x].nilai_akhir=(mahasiswa[x].tugas*10/100)+(mahasiswa[x].kuis*20/100)+(mahasiswa[x].mid*30/100)+(mahasiswa[x].uas*40/100);
cout<<endl;
cout<<"------------------------------------------------------------\n";
cout<<"Nama        : "<<mahasiswa[x].nama<<endl;
cout<<"NIM         : "<<mahasiswa[x].nim<<endl<<endl;
cout<<"tugas       : "<<mahasiswa[x].tugas<<endl;
cout<<"kuis        : "<<mahasiswa[x].kuis<<endl;
cout<<"mid         : "<<mahasiswa[x].mid<<endl;
cout<<"UAS         : "<<mahasiswa[x].uas<<endl;
cout<<"nilai akhir : "<<mahasiswa[x].nilai_akhir<<endl;
cout<<"------------------------------------------------------------\n";


mahasiswa[x].nilai_akhir=(mahasiswa[x].tugas*10/100)+(mahasiswa[x].kuis*20/100)+(mahasiswa[x].mid*30/100)+(mahasiswa[x].uas*40/100);

if (mahasiswa[x].nilai_akhir>85)
    cout<<"anda mendapat (A)";
else if (mahasiswa[x].nilai_akhir>=70)
    cout<<"anda mendapat (B)";
else if (mahasiswa[x].nilai_akhir>=55)
    cout<<"anda mendapat (C)";
else if (mahasiswa[x].nilai_akhir>=40)
    cout<<"anda mendapat (D)";
else if (mahasiswa[x].nilai_akhir<=40)
    cout<<"anda mendapat (E)";
cout<<endl;
}
cout<<endl;
}
