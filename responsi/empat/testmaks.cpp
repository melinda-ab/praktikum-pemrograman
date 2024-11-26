#include <iostream>
using namespace std;

int main(){
    cout<<" Temukan Nilai Maksimum dalam Daftar"<<endl;
    cout<<" ==================================="<<endl;
    int x[5]={3,6,2,8,10};
    int expected = 10;
    cout<<" Nilai dalam daftar: ";
    for(int i=0; i<5; i++){
        cout<<x[i]<<" ";
    }
    int max=x[0];
    for(int i=0; i<5; i++){
        if(max<x[i]){
            max=x[i];
        }
    }
    cout<<endl;
    cout<<" Nilai maksimum adalah "<<max<<endl;
    cout<<" ==================================="<<endl;
    cout<<" Test mencari nilai maks: ";
    if(max==expected){
        cout<<"Passed!"<<endl;
    } else{
        cout<<"Failed!"<<endl;
    }
    return 0;
}