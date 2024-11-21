#include <iostream>
using namespace std;

struct mahasiswa{
    string nisn;
    string nama;
    float values;
};

void bubblesortnisn(mahasiswa data[],int n){
    mahasiswa t;
    for(int i=0;i<=n-1;i++){
        for (int j=0;j<=(n-2);j++){
            if (data[j].nisn > data [j+1].nisn){
                t=data[j];
                data[j]=data[j+1];
                data[j+1]=t;
            }
        }
    }
}

void bubblesortvalues(mahasiswa data[],int n){
    mahasiswa t;
    for(int i=0;i<=n-1;i++){
        for (int j=0;j<=(n-2);j++){
            if (data[j].values > data [j+1].values ||
             (data[j].values == data [j+1].values && data[j].nisn > data [j+1].nisn)){
                t=data[j];
                data[j]=data[j+1];
                data[j+1]=t;
            }
        }
    }
}

int main(){
    mahasiswa data[] = {
        {"9960312699", "Handi Ramadhan", 90},
        {"9963959682", "Rio Alfandra", 55} ,
        {"9950310962", "Ronaldo Valentino Uneputty", 80},
        {"9970272750", "Achmad Yaumil Fadjri R.", 60},
        {"9970293945", "Alivia Rahma Pramesti", 70},
        {"9952382180", "Ari Lutfianto", 65},
        {"9965653989", "Arief Budiman", 60}
    };
    int n = sizeof(data) / sizeof(data[0]);
    
    bubblesortnisn(data, n);
    cout << "Data diurutkan berdasarkan NISN:" << endl;
    for (int i = 0; i < n; i++) {
        cout<<data[i].nisn<<" | "<<data[i].values<<" | "<<data[i].nama<<endl;
    }
    
    cout<<endl;
    bubblesortvalues(data, n);
    cout << "Data diurutkan berdasarkan Values:" << endl;
    for (int i = 0; i < n; i++) {
        cout<<data[i].values<<" | "<<data[i].nisn<<" | "<<data[i].nama<<endl;
    }
    return 0;
}