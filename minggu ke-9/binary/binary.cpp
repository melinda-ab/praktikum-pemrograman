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

void binarysearch(mahasiswa data[],int n, string target){
    int left=0, right=n-1, mid;
    bool found = false;

    cout<<" Proses Binary Search"<<endl;
    while(left <= right){
        mid=(left+right)/2;
        cout<<" Check NISN: "<<data[mid].nisn<<" pada index "<<mid<<endl;
        if(data[mid].nisn == target){
            cout<<endl;
            cout<<" Murid ditemukan"<<endl;
            cout<<" NISN: "<<data[mid].nisn<<endl;
            cout<<" Value: "<<data[mid].values<<endl;
            cout<<" Name: "<<data[mid].nama<<endl;
            found=true;
            break;
        } else if(data[mid].nisn<target){
            cout<<" Target NISN lebih besar. Bergeser ke kanan."<<endl;
            left=mid+1;
        } else{
            cout<<" Target NISN lebih kecil. Bergeser ke kiri."<<endl;
            right=mid-1;
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
    string target = "9950310962";
    binarysearch(data, n, target);
    
    return 0;
}