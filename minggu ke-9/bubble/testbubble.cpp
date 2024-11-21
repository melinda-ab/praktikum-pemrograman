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
    vector<string>nisn;
    for (int i = 0; i < n; i++) {
        string formatted_values = to_string(int(data[i].values));
        string format = data[i].nisn + " | " + formatted_values + " | " + data[i].nama;
        nisn.push_back(format);
    }
    testcase(nisn, "nisn.txt");
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
    vector<string>values;
    for (int i = 0; i < n; i++) {
        string formatted_values = to_string(int(data[i].values));
        string format = formatted_values + " | " + data[i].nisn + " | " + data[i].nama;
        values.push_back(format);
    }
    testcase(values, "values.txt");
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
    
    cout << "Data diurutkan berdasarkan NISN: ";
    bubblesortnisn(data, n);
    cout << "Data diurutkan berdasarkan Values: ";    
    bubblesortvalues(data, n);
    
    return 0;
}