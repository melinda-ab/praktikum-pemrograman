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
    vector<string>nisn;
    for (int i = 0; i < n; i++) {
        string formatted_values = to_string(int(data[i].values));
        string format = data[i].nisn + " | " + formatted_values + " | " + data[i].nama;
        nisn.push_back(format);
    }
    testcase(nisn, "nisn.txt");
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
    selectionsortnisn(data, n);
    cout << "Data diurutkan berdasarkan Values: ";    
    selectionsortvalues(data, n);

    return 0;
}