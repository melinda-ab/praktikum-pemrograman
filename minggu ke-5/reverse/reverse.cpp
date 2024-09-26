#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int>a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout<<" Orginal numbers: ";
    for (int i = 0; i<a.size(); i++){
        cout<<" "<<a[i];
    }
    cout<<endl;
    
    reverse(a.begin(), a.end());
    cout<<" Reversed numbers:";
    for (int i = 0; i<a.size(); i++){
        cout<<" "<<a[i];
    }
    return 0;
}