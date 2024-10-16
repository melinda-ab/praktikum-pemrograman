#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct barang{
    string kode;
    string nama;
    int harga;
    int jumlah;
};

void testcase(const string& filename, int etotaljumlah, int ehargatotal, int rata){
    int n;
    int totaljumlah=0;
    int hargatotal=0;
    int harga;
    ifstream inputfile(filename);
    inputfile>>n;
    barang x[n];
    int y[n];
    for(int i=0;i<=(n-1);i++){
        inputfile>>x[i].kode;       
        inputfile>>x[i].nama;       
        inputfile>>x[i].harga;       
        inputfile>>x[i].jumlah;
    }
    for(int i=0;i<=(n-1);i++){
        totaljumlah += x[i].jumlah;
        y[i]=x[i].harga * x[i].jumlah;
        hargatotal += y[i];
    }
    harga = hargatotal/totaljumlah;

    if (totaljumlah == etotaljumlah && hargatotal == ehargatotal && harga == rata) {
            cout << " Test Passed!" << endl;
        } else {
            cout << " Test Failed!" << endl;
    }
    inputfile.close();
}

int main (){
    testcase("data1.txt", 6, 800000, 133333);
    cout << endl;
    testcase("data2.txt", 7, 1000000, 142857);
    cout << endl;
    testcase("data3.txt", 3, 150000, 50000);
}