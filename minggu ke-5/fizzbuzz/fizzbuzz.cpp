#include <iostream>
#include <vector>
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
    for (int i=0; a.size(); i++){
        cout<<" "<<a[i];
        if ((i+1)%10==0){
            cout<<endl;
        }
    }
    
    return 0;
}