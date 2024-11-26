#include <iostream>
using namespace std;

int main(){
    float pi = 3.14;
    int r=3;
    float expected = 28.26;
    cout<<"    Hitung Luas Lingkaran"<<endl;
    cout<<" ==========================="<<endl;
    cout<<" Rumus Lingkaran:"<<endl;
    cout<<" pi x jari-jari x jari-jari"<<endl;
    cout<<" ---------------------------"<<endl;
    cout<<" Masukan nilai jari-jari: "<<r<<endl;
    float a=pi*r*r;
    cout<<" Luas lingkaran adalah "<<a<<endl;
    cout<<" ==========================="<<endl;
    cout<<" Test hitung luas: ";
    if(a==expected){
        cout<<"Passed!"<<endl;
    } else{
        cout<<"Failed!"<<endl;
    }
    return 0;
}