#include <iostream>
using namespace std;

int main(){
    float pi = 3.14;
    int r1=3;
    int r2=5;
    int r3=10;
    float expected1 = 28.26;
    float expected2 = 78.5;
    float expected3 = 314;
    cout<<"    Hitung Luas Lingkaran"<<endl;
    cout<<" ==========================="<<endl;
    cout<<" Rumus Lingkaran:"<<endl;
    cout<<" pi x jari-jari x jari-jari"<<endl;
    cout<<" ---------------------------"<<endl;
    cout<<" Masukan nilai jari-jari: "<<r1<<endl;
    cout<<" Masukan nilai jari-jari: "<<r2<<endl;
    cout<<" Masukan nilai jari-jari: "<<r3<<endl;
    float a1=pi*r1*r1;
    float a2=pi*r2*r2;
    float a3=pi*r3*r3;
    cout<<" Luas lingkaran adalah "<<a1<<endl;
    cout<<" Luas lingkaran adalah "<<a2<<endl;
    cout<<" Luas lingkaran adalah "<<a3<<endl;
    cout<<" ==========================="<<endl;
    cout<<" Test hitung luas: ";
    if(a1==expected1 && a2==expected2 && a3==expected3){
        cout<<"Passed!"<<endl;
    } else{
        cout<<"Failed!"<<endl;
    }
    return 0;
}