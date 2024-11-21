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

void binarysearch(mahasiswa data[],int n, string target){
    int left=0, right=n-1, mid;
    bool found = false;

    vector<string>search;
    search.push_back(" Proses Binary Search");
    while(left <= right){
        mid = (left + right) / 2;
        search.push_back(" Check NISN: " + data[mid].nisn + " pada index " + to_string(mid));
        if(data[mid].nisn == target) {
            search.push_back("");
            search.push_back(" Murid ditemukan");
            search.push_back(" NISN: " + data[mid].nisn);
            search.push_back(" Value: " + to_string(int(data[mid].values)));
            search.push_back(" Name: " + data[mid].nama);
            found = true;
            break;
        } else if(data[mid].nisn < target){
            search.push_back(" Target NISN lebih besar. Bergeser ke kanan.");
            left = mid + 1;
        } else{
            search.push_back(" Target NISN lebih kecil. Bergeser ke kiri.");
            right = mid - 1;
        }
    }    
    testcase(search, "test.txt");
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