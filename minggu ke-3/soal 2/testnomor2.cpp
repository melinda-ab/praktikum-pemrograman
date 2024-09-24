#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;

    a = 5;
    b = 1;
    c = 9;
    cout << " Menentukan Bilangan Terbesar"<<endl;
    cout << " Input bilangan pertama : " << a << endl;
    cout << " Input bilangan kedua   : " << b << endl;
    cout << " Input bilangan ketiga  : " << c << endl;
    cout << endl;

    if (a >= b && a >= c) {
        d = a;
    } else if (b >= a && b >= c) {
        d = b;
    } else {
        d = c;
    }
    
    cout << " Bilangan terbesar adalah " << d << endl << endl;

    int expectedd = 9;

    if (expectedd==d) {
        cout << " Test Berhasil!" << endl;
    } else{
        cout << " Test Gagal!" << endl;
    }
    return 0;
}
