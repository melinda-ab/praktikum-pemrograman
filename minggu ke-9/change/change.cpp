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

void searchchange(mahasiswa data[],int n, int target, string target2){
    int left=0, right=n-1, mid;
    bool found = false;

    cout<<" Proses Binary Search"<<endl;
    while(left <= right){
        mid=(left+right)/2;
        cout<<" Check Value: "<<data[mid].nisn<<" pada index "<<mid<<endl;
        if(data[mid].values == target){
            cout<<endl;
            cout<<" Murid ditemukan"<<endl;
            cout<<" Value: "<<data[mid].values<<endl;            
            cout<<" NISN: "<<data[mid].nisn<<endl;
            cout<<" Name: "<<data[mid].nama<<endl;
            found=true;
            cout<<endl;
            cout<<" Mengubah Nama Murid Menjadi "<<target2<<endl;
            cout<<" Value: "<<data[mid].values<<endl;
            cout<<" NISN: "<<data[mid].nisn<<endl;
            cout<<" Name: "<<target2<<endl;
            int i = mid - 1;
            while (i >= 0 && data[i].values == target) {
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
                i--;
            }

            int j = mid + 1;
            while (j < n && data[j].values == target) {
                cout<<endl;
                cout<<" Murid ditemukan"<<endl;
                cout<<" Value: "<<data[j].values<<endl;
                cout<<" NISN: "<<data[j].nisn<<endl;
                cout<<" Name: "<<data[j].nama<<endl;
                found=true;
                cout<<endl;
                cout<<" Mengubah Nama Murid Menjadi "<<target2<<endl;
                cout<<" Value: "<<data[j].values<<endl;
                cout<<" NISN: "<<data[j].nisn<<endl;
                cout<<" Name: "<<target2<<endl;
                j++;
            }
            break;
        } else if(data[mid].values<target){
            cout<<" Target value lebih besar. Bergeser ke kanan."<<endl;
            left=mid+1;
        } else{
            cout<<" Target value lebih besar. Bergeser ke kanan."<<endl;
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
    int target = 60;
    string target2 = "Joko";    
    searchchange(data, n, target, target2);

    return 0;
}