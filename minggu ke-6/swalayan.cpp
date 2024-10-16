#include <iostream>
using namespace std;

struct barang{
    string kode;
    string nama;
    int harga;
    int jumlah;
};

int main(){
    int n;
    int totaljumlah=0;
    int hargatotal=0;
    int harga;
    cout<<" Banyak Jenis Barang: ";
    cin>>n;
    cout<<endl;
    cout<<" ----------------------------"<<endl;
    cout<<" Data Jenis Barang"<<endl;
    barang x[n];
    int y[n];
    for(int i=0;i<=(n-1);i++){
        cout<<" Kode barang: ";
        cin>>x[i].kode;
        cout<<" Nama barang: ";
        cin>>x[i].nama;
        cout<<" Harga barang: ";
        cin>>x[i].harga;
        cout<<" Jumlah barang: ";
        cin>>x[i].jumlah;
        cout<<endl;
    }
    cout<<" ----------------------------"<<endl;
    cout<<" Data Jumlah Setiap Barang"<<endl;
    for(int i=0;i<=(n-1);i++){
        cout<<" Nama barang: "<<x[i].nama<<endl;
        cout<<" Jumlah barang: "<<x[i].jumlah<<endl;
        totaljumlah += x[i].jumlah;
        y[i]=x[i].harga * x[i].jumlah;
        hargatotal += y[i];
        cout<<endl;
    }
    cout<<" ----------------------------"<<endl;
    if(totaljumlah<=50){
        cout<<" Total Jumlah Barang: "<<totaljumlah<<endl;
        cout<<" Total Harga Semua Barang: "<<hargatotal<<endl;
        harga = hargatotal/totaljumlah;
        cout<<" Rata-rata Semua Barang: "<<harga<<endl;
    } else {
        cout<<" Kapasitas 50 Barang"<<endl;
    }
    return 0;
}