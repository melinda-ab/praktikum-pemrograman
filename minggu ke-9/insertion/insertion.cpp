#include <iostream>
using namespace std;

struct mahasiswa{
    string nisn;
    string nama;
    float values;
};

void insertionsortnisn(mahasiswa data[],int n){
    for (int i = 1; i < n; i++) {
        mahasiswa key = data[i];
        int j = i - 1;
        while (j >= 0 && data[j].nisn > key.nisn) {
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = key;
    }
}

void insertionsortvalues(mahasiswa data[],int n){
    for (int i = 1; i < n; i++) {
        mahasiswa key = data[i];
        int j = i - 1;
        while (j >= 0 && data[j].values > key.values) {
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = key;
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
    
    insertionsortnisn(data, n);
    cout << "Data diurutkan berdasarkan NISN:" << endl;
    for (int i = 0; i < n; i++) {
        cout<<"NISN:    "<<data[i].nisn<<endl;
        cout<<"Nama:    "<<data[i].nama<<endl;
        cout<<"Values:  "<<data[i].values<<endl;
    }
    
    cout<<endl;
    insertionsortvalues(data, n);
    cout << "Data diurutkan berdasarkan Values:" << endl;
    for (int i = 0; i < n; i++) {
        cout<<"Values:  "<<data[i].values<<endl;
        cout<<"Nama:    "<<data[i].nama<<endl;
        cout<<"NISN:    "<<data[i].nisn<<endl;
    }

    return 0;
}