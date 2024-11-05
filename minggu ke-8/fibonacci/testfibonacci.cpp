#include <iostream>
#include <fstream>
using namespace std;

int fibonacci(int x){
    if(x==0){
        return 0;
    } else if(x==1){
        return 1;
    } else{
        return fibonacci(x-1)+fibonacci(x-2);
    }
}

int main(){
    ifstream inputfile("input.txt");
    int x, expectedresult;
    while (inputfile >> x >> expectedresult) {
        int y = fibonacci(x);
        if (y == expectedresult) {
            cout<<" Test Passed!"<<endl;
        }else{
            cout<<" Test Failed!"<<endl;
        }
    }
    inputfile.close();
    return 0;
}