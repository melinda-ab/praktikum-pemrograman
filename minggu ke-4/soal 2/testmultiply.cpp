#include <iostream>
using namespace std;

int main(){
    int input, multiply, x;
    
    input = 8;

    cout << " Multiplication table" << endl;
    cout << " Input number: " << input << endl << endl;

    cout << " Multiplication table for " << input << endl << endl;

    bool testfail = true;
    bool testpass = true;

    for(int x = 1; x <= 10; x++) {
        multiply = input * x;
        cout << " " << input << " x " << x << " = " << multiply << endl;

        int expectedmultiply = input * x;
        if(multiply != expectedmultiply) {
            cout << " Test Failed at " << input << " x " << x << endl;
            testpass = false;
        } else {
            testfail = false;
        }
    }

    if(testpass) {
        cout << endl << " All Tests Passed!" << endl;
    } else if (testfail) {
        cout << endl << " All Tests Failed!" << endl;
    } else {
        cout << endl << " Some Tests Passed, But Some Failed!" << endl;
    }


    return 0;
}
