// hawwina aunil azifa
// nim 18050623018
// D3 manajemen informatika 2018
// 6 maret 2019

#include<iostream>

using namespace std;
struct data
{
    int awal;
    int jam_kerja;
    int gaji_total;
}
gaji;
int main()
{
    gaji.awal=500;
    cout<<"=============================="<<endl;
    cout<<"menghitung gaji harian pegawai"<<endl;
    cout<<"=============================="<<endl<<endl<<endl;
    cout<<"~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~"<<endl<<endl;
    cout<<"jumlah jam kerja pegawai : ";
    cin>>gaji.jam_kerja;

    if (gaji.jam_kerja <=7)
    {
        gaji.gaji_total=gaji.jam_kerja*gaji.awal;
        cout<<"total gaji harian yang pegawai dapatkan adalah : "<<gaji.gaji_total<<endl<<endl;
        cout<<"~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~"<<endl;
    }

    else if (gaji.jam_kerja>7)
    {
        gaji.gaji_total=((gaji.jam_kerja-7)*15*gaji.awal)+3500;
        cout<<"total gaji harian yang pegawai dapatkan adalah : "<<gaji.gaji_total<<endl<<endl;
        cout<<"~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~"<<endl;
    }
}


