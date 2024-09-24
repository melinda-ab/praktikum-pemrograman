#include <iostream>
using namespace std;

int main(){
    int input, multiply, x;
    
    input = 8;

    cout << " Multiplication table" << endl;
    cout << " Input number: " << input << endl << endl;

    cout << " Multiplication table for " << input << endl << endl;

    for(int x = 1; x <= 10; x++) {
        multiply = input * x;
        cout << " " << input << " x " << x << " = " << multiply << endl;
    }

    return 0;
}
