#include <iostream>
using namespace std;

struct mahasiswa{
    string nisn;
    string nama;
    float values;
};

void selectionsortnisn(mahasiswa data[],int n){
    for (int i = 0; i < (n-1); i++) {
        int min=i;
        for (int j = i+1; j < n; j++) {
            if (data[j].nisn < data[min].nisn){
                min=j;
            }
        }
        mahasiswa temp = data[i];
        data[i] = data[min];
        data[min] = temp;
    }
}

void selectionsortvalues(mahasiswa data[],int n){
    for (int i = 0; i < (n-1); i++) {
        int min=i;
        for (int j = i+1; j < n; j++) {
            if (data[j].values < data[min].values){
                min=j;
            }
        }
        mahasiswa temp = data[i];
        data[i] = data[min];
        data[min] = temp;
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
    
    selectionsortnisn(data, n);
    cout << "Data diurutkan berdasarkan NISN:" << endl;
    for (int i = 0; i < n; i++) {
        cout<<data[i].nisn<<" | "<<data[i].values<<" | "<<data[i].nama<<endl;
    }

    cout<<endl;
    selectionsortvalues(data, n);
    cout << "Data diurutkan berdasarkan Values:" << endl;
    for (int i = 0; i < n; i++) {
        cout<<data[i].values<<" | "<<data[i].nisn<<" | "<<data[i].nama<<endl;
    }
    return 0;
}