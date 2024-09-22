#include <iostream>
using namespace std;

int main(){
    int input, multiply, x;
    cout<<" Multiplication table"<<endl;
    cout<<" Input number: ";
    cin>>input;
    cout<<endl;
    x=0;

    while(x<=10){
        multiply=input*x;
        cout<<" "<<input<<" x "<<x<<" = "<<multiply<<endl;
        x++;
    }
    return 0;
}