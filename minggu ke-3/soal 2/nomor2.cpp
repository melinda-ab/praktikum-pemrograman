#include <iostream>
#include <fstream>  // Include fstream for file handling
using namespace std;

int main(){
    int a, b, c;

    // Open file for writing output
    ofstream outfile("hasil_bilangan_terbesar.txt");

    if(!outfile){
        cout<<" Error opening file!"<<endl;
        return 1;
    }

    cout<<" Menentukan Bilangan Terbesar"<<endl;
    cout<<" Input bilangan pertama : ";
    cin>>a;
    cout<<" Input bilangan kedua   : ";
    cin>>b;
    cout<<" Input bilangan ketiga  : ";
    cin>>c;
    cout<<endl;

    outfile << " Menentukan Bilangan Terbesar\n";
    outfile << " Input bilangan pertama : " << a << "\n";
    outfile << " Input bilangan kedua   : " << b << "\n";
    outfile << " Input bilangan ketiga  : " << c << "\n\n";
    
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
