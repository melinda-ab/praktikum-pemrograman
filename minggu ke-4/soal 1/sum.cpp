#include <iostream>
using namespace std;

int main(){
    int input, sum, n, x;
    cout<<" Accumulate The Sum"<<endl;
    cout<<" Input number: ";
    cin>>input;
    cout<<endl;
    n=0;
    sum=0;
    while(n<=input){
        cout<<" ";
        cout<<n<<" ";
        x = sum + n;
        sum = x;
        n++;
    }
    cout<<endl<<endl;
    cout<<" The accumulative sum is: "<<sum<<endl;
    return 0;
}