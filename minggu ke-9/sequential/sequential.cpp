#include <iostream>
using namespace std;

struct mahasiswa{
    string nisn;
    string nama;
    float values;
};

void searchchange(mahasiswa data[],int n, int target, string target2){
    bool found = false;

    cout<<" Proses Sequential Search"<<endl;
    for (int i = 0; i < n; i++){
        cout<<" Check Value: "<<data[i].values<<" pada index "<<i<<endl;
        if(data[i].values == target){
            cout<<endl;
            cout<<" Murid ditemukan"<<endl;
            cout<<" Value: "<<data[i].values<<endl;            
            cout<<" NISN: "<<data[i].nisn<<endl;
            cout<<" Name: "<<data[i].nama<<endl;
            found=true;
            cout<<endl;
            cout<<" Mengubah Nama Murid Menjadi "<<target2<<endl;
            cout<<" Value: "<<data[i].values<<endl;
            cout<<" NISN: "<<data[i].nisn<<endl;
            cout<<" Name: "<<target2<<endl;
            cout<<endl;
        }
    }
    if (!found) {
        cout<<endl;
        cout<<" Murid dengan Value "<<target<<" tidak ditemukan."<<endl;    
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

    int target = 60;
    string target2 = "Joko";    
    searchchange(data, n, target, target2);

    return 0;
}