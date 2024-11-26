#include <iostream>
using namespace std;

int main(){
    cout<<" Temukan Nilai Maksimum dalam Daftar"<<endl;
    cout<<" ==================================="<<endl;
    int x[5]={3,6,2,8,10};
    int y[3]={52,72,29};
    int z[7]={2,87,21,19,32,65,94};
    int expectedx = 10;
    int expectedy = 72;
    int expectedz = 94;
    cout<<" Nilai dalam daftar x: ";
    for(int i=0; i<5; i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
    cout<<" Nilai dalam daftar y: ";
    for(int i=0; i<5; i++){
        cout<<y[i]<<" ";
    }
    cout<<endl;
    cout<<" Nilai dalam daftar z: ";
    for(int i=0; i<5; i++){
        cout<<z[i]<<" ";
    }
    int maxx=x[0];
    int maxy=y[0];
    int maxz=z[0];
    for(int i=0; i<5; i++){
        if(maxx<x[i]){
            maxx=x[i];
        }
    }
    for(int i=0; i<3; i++){
        if(maxy<y[i]){
            maxy=y[i];
        }
    }
    for(int i=0; i<7; i++){
        if(maxz<z[i]){
            maxz=z[i];
        }
    }
    cout<<endl;
    cout<<" Nilai maksimum x adalah "<<maxx<<endl;
    cout<<" Nilai maksimum y adalah "<<maxy<<endl;
    cout<<" Nilai maksimum z adalah "<<maxz<<endl;
    cout<<" ==================================="<<endl;
    cout<<" Test mencari nilai maks: ";
    if(maxx==expectedx && maxy==expectedy && maxz==expectedz){
        cout<<"Passed!"<<endl;
    } else{
        cout<<"Failed!"<<endl;
    }
    return 0;
}