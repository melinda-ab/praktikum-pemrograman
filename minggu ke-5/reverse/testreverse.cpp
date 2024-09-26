#include <iostream>
#include <fstream>
#include <cassert>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main(){
    vector<int>a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    stringstream c;

    c<<" Orginal numbers: ";
    cout<<" Orginal numbers: ";
    for (int i = 0; i<a.size(); i++){
        c<<" "<<a[i];
        cout<<" "<<a[i];
    }
    c<<endl;
    cout<<endl;
    
    reverse(a.begin(), a.end());
    c<<" Reversed numbers:";
    cout<<" Reversed numbers:";
    for (int i = 0; i<a.size(); i++){
        c<<" "<<a[i];
        cout<<" "<<a[i];
    }

    string d = c.str();

    vector<int>b;
    ifstream file("expectedoutput.txt");

    stringstream e;
    e << file.rdbuf();
    string f = e.str();
    file.close();

    if (d==f){
        cout<<endl<<endl;
        cout<<" Test passed!"<<endl;
    } else {
        cout<<endl<<endl;
        cout<<" Test failed!"<<endl;
    }

    return 0;
}