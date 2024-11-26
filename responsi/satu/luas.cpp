#include <iostream>
using namespace std;

int main(){
    float pi = 3.14;
    int r;
    cout<<"    Hitung Luas Lingkaran"<<endl;
    cout<<" ==========================="<<endl;
    cout<<" Rumus Lingkaran:"<<endl;
    cout<<" pi x jari-jari x jari-jari"<<endl;
    cout<<" ---------------------------"<<endl;
    cout<<" Masukan nilai jari-jari: ";
    cin>>r;
    cout<<" ==========================="<<endl;
    float a=pi*r*r;
    cout<<" Luas lingkaran adalah "<<a<<endl;
    return 0;
}