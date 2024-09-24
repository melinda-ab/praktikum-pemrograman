#include <iostream>
using namespace std;

int main(){
    int input, sum, n, x;

    input = 4;
    
    cout<<" Accumulate The Sum"<<endl;
    cout<<" Input number: " << input;
    cout<<endl;
    
    n = 0;
    sum = 0;
    for(int n = 0; n <= input; n++) {
        cout << " " << n << " ";  
        x = sum + n;
        sum = x;
    }
    cout << endl << endl;
    cout << " The accumulative sum is: " << sum << endl << endl;

    int expectedsum = 10;

    if (expectedsum==sum) {
        cout << " Test Passed!" << endl;
    } else{
        cout << " Test Failed!" << endl;
    }

    return 0;
}
