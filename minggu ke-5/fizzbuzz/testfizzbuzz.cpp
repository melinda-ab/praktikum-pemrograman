#include <iostream>
#include <fstream>
#include <cassert>
#include <vector>
#include <sstream>
using namespace std;

int main(){
    vector<string>a;
    for (int i = 1; i<=100; i++){
        if (i%3==0 && i%5==0){
            a.push_back("FizzBuzz");
        } else if (i%3==0){
            a.push_back("Fizz");
        } else if (i%5==0){
            a.push_back("Buzz");
        } else {
            a.push_back(to_string(i));
        }
    }

    for (int i=0; i<a.size(); i++){
        cout<<" "<<a[i];
        if ((i+1)%10==0){
            cout<<endl;
        }
    }

    cout<<endl;
    
    vector<string>b;
    ifstream file("expectedoutput.txt");
    string line;

    while (getline(file, line)){
        stringstream c(line);
        string d;
        while (c >> d){
            b.push_back(d);
        }
    }
    file.close();

    for (size_t i = 0; i<a.size(); i++){
        if(a[i] != b[i]){
            cout<<" Test failed at index "<<i+1<<endl;
            return 1;
        }
    }
    
    cout<<" Test passed!"<<endl;

    return 0;
}