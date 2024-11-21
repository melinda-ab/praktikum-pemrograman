#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct mahasiswa{
    string nisn;
    string nama;
    float values;
};

void testcase(const vector<string>& sorted, const string& filename) {
    ifstream inputfile(filename);
    vector<string> txt;
    string line;

    while (getline(inputfile, line)) {
        txt.push_back(line);
    }

    bool testpassed = true;
    if (sorted.size() != txt.size()) {
        testpassed = false;
    } else {
        for (size_t i = 0; i < sorted.size(); i++) {
            if (sorted[i] != txt[i]) {
                testpassed = false;
                break;
            }
        }
    }

    if (testpassed) {
        cout<<"Test Passed!"<<endl;
    } else {
        cout<<"Test Failed!"<<endl;
    }

    inputfile.close();
}

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
    
    vector<string>change;
    change.push_back(" Proses Binary Search");
    while(left <= right){
        mid=(left+right)/2;
        change.push_back(" Check Value: " + data[mid].nisn + " pada index " + to_string(mid));
        if(data[mid].values == target){
            change.push_back("");
            change.push_back(" Murid ditemukan");
            change.push_back(" Value: " + to_string(int(data[mid].values)));
            change.push_back(" NISN: " + data[mid].nisn);
            change.push_back(" Name: " + data[mid].nama);
            found = true;
            data[mid].nama = target2;
            change.push_back("");
            change.push_back(" Mengubah Nama Murid Menjadi " + target2);
            change.push_back(" Value: " + to_string(int(data[mid].values)));
            change.push_back(" NISN: " + data[mid].nisn);
            change.push_back(" Name: " + data[mid].nama);
            int i = mid - 1;
            while (i >= 0 && data[i].values == target) {
                change.push_back("");
                change.push_back(" Murid ditemukan");
                change.push_back(" Value: " + to_string(int(data[i].values)));
                change.push_back(" NISN: " + data[i].nisn);
                change.push_back(" Name: " + data[i].nama);
                found = true;
                data[i].nama = target2;
                change.push_back("");
                change.push_back(" Mengubah Nama Murid Menjadi " + target2);
                change.push_back(" Value: " + to_string(int(data[i].values)));
                change.push_back(" NISN: " + data[i].nisn);
                change.push_back(" Name: " + data[i].nama);
                i--;
            }

            int j = mid + 1;
            while (j < n && data[j].values == target) {
                change.push_back("");
                change.push_back(" Murid ditemukan");
                change.push_back(" Value: " + to_string(int(data[j].values)));
                change.push_back(" NISN: " + data[j].nisn);
                change.push_back(" Name: " + data[j].nama);
                found = true;
                data[j].nama = target2;
                change.push_back("");
                change.push_back(" Mengubah Nama Murid Menjadi " + target2);
                change.push_back(" Value: " + to_string(int(data[j].values)));
                change.push_back(" NISN: " + data[j].nisn);
                change.push_back(" Name: " + data[j].nama);
                j++;
            }
            break;
        } else if(data[mid].values<target){
            change.push_back(" Target value lebih besar. Bergeser ke kanan.");
            left=mid+1;
        } else{
            change.push_back(" Target value lebih kecil. Bergeser ke kiri.");
            right=mid-1;
        }
    }
    testcase(change, "test.txt");
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