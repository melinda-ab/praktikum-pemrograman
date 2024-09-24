#include <iostream>
#include <fstream>  // Include fstream for file handling
using namespace std;

int main(){
    int a, b, c;

    // Open file for writing output
    ofstream outfile("hasil_bilangan_terbesar.txt");

    if(!outfile){
        cout << " Error opening file!"<<endl;
        return 1;
    }

    a = 5;
    b = 1;
    c = 9;
    cout << " Menentukan Bilangan Terbesar"<<endl;
    cout << " Input bilangan pertama : " << a << endl;
    cout << " Input bilangan kedua   : " << b << endl;
    cout << " Input bilangan ketiga  : " << c << endl;
    cout << endl;

    outfile << " Menentukan Bilangan Terbesar\n";
    outfile << " Input bilangan pertama : " << a << endl;
    outfile << " Input bilangan kedua   : " << b << endl;
    outfile << " Input bilangan ketiga  : " << c << endl << endl;
    
    outfile << " Bilangan terbesar adalah ";
    if (a >= b && a >= c) {
        outfile << a;
    } else if (b >= a && b >= c) {
        outfile << b;
    } else {
        outfile << c;
    }

    // Close the file after writing
    outfile.close();
    
    cout << " Hasil telah disimpan di 'hasil_bilangan_terbesar.txt'." << endl;

    return 0;
}
