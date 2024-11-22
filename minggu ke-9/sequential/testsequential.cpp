#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct mahasiswa {
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
        cout << "Test Passed!" << endl;
    } else {
        cout << "Test Failed!" << endl;
    }

    inputfile.close();
}

int main() {
    mahasiswa data[] = {
        {"9960312699", "Handi Ramadhan", 90},
        {"9963959682", "Rio Alfandra", 55},
        {"9950310962", "Ronaldo Valentino Uneputty", 80},
        {"9970272750", "Achmad Yaumil Fadjri R.", 60},
        {"9970293945", "Alivia Rahma Pramesti", 70},
        {"9952382180", "Ari Lutfianto", 65},
        {"9965653989", "Arief Budiman", 60}
    };
    int n = sizeof(data) / sizeof(data[0]);

    int target = 60;
    string target2 = "Joko";

    vector<string> change;
    change.push_back(" Proses Sequential Search");
    bool found = false;

    for (int i = 0; i < n; i++) {
        change.push_back(" Check Value: " + to_string(int(data[i].values)) + " pada index " + to_string(i));
        if (data[i].values == target) {
            change.push_back("");
            change.push_back(" Murid ditemukan");
            change.push_back(" Value: " + to_string(int(data[i].values)));
            change.push_back(" NISN: " + data[i].nisn);
            change.push_back(" Name: " + data[i].nama);
            data[i].nama = target2;
            change.push_back("");
            change.push_back(" Mengubah Nama Murid Menjadi " + target2);
            change.push_back(" Value: " + to_string(int(data[i].values)));
            change.push_back(" NISN: " + data[i].nisn);
            change.push_back(" Name: " + data[i].nama);
            found = true;
        }
    }

    ofstream outputfile("test.txt");
    for (const auto& line : change) {
        outputfile << line << endl;
    }
    outputfile.close();

    testcase(change, "test.txt");

    return 0;
}
