#include <iostream>
#include <fstream>
using namespace std;

void hitungtotal(int n, double& total, int& count, ifstream& inputfile){
    if (n <= 0){
        return;
    }
    double angka;
    inputfile>>angka;
    if (inputfile) {
        total += angka;
        count++;
        hitungtotal(n - 1, total, count, inputfile);
    }
}

double rata(int n, ifstream& inputfile){
    int count=0;
    double total=0;
    hitungtotal(n, total, count, inputfile);
    if (count == 0) {
        return 0;
    } else {
        return total / count;
    }
}

void testcase(const string& filename){
    ifstream inputfile(filename);
    int n;
    inputfile >> n;
    if (n<=0){
        cout<<" Jumlah angka harus lebih besar dari 0.";
    } else{
        double ratarata = rata(n, inputfile);
        double expectedresult;
        inputfile>>expectedresult;
        if (ratarata == expectedresult) {
            cout<<" Test Passed!"<<endl;
        }else{
            cout<<" Test Failed!"<<endl;
        }
    }
    inputfile.close();
}

int main(){
    testcase("input1.txt");
    testcase("input2.txt");
    testcase("input3.txt");
    return 0;
}