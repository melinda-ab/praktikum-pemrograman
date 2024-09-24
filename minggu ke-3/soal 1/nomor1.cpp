#include <iostream>
#include <cmath>
#include <fstream>  // Include fstream for file handling
using namespace std;

int main () {
    int a, b, c;
    float d, x1, x2, x;
    
    // Open file for writing output
    ofstream outfile("hasil_persamaan_kuadrat.txt");
    
    if(!outfile){
        cout << " Error opening file!"<<endl;
        return 1;
    }

    cout << " Diskriminan dan Akar Persamaan Kuadrat"<<endl<<endl;
    cout << "        ax^2+bx+c=0       "<<endl<<endl;
    cout << " Input koefisien a : ";
    cin >> a;
    cout << " Input koefisien b : ";
    cin >> b;
    cout << " Input koefisien c : ";
    cin >> c;
    
    outfile << " Diskriminan dan Akar Persamaan Kuadrat" << endl << endl;
    outfile << "        ax^2 + bx + c = 0" << endl << endl;
    
    outfile << " Input koefisien a : " << a << endl;
    outfile << " Input koefisien b : " << b << endl;
    outfile << " Input koefisien c : " << c << endl << endl;

    // Display equation based on the input coefficients
    if (a == 1) {
        outfile << " x^2 + (" << b << ")x + (" << c << ") = 0" << endl << endl;
    } else if (a == -1) {
        outfile << " -x^2 + (" << b << ")x + (" << c << ") = 0" << endl << endl;
    } else if (a == 0) {
        outfile << " (" << b << ")x + (" << c << ") = 0" << endl << endl;
    } else {
        outfile << " (" << a << ")x^2 + (" << b << ")x + (" << c << ") = 0" << endl << endl;
    }
    
    // Calculate discriminant
    d = (b * b) - (4 * a * c);
    outfile << " Diskriminan: " << d << endl << endl;
    
    // Solve the equation based on the discriminant and value of a
    if (a == 0 && d >= 0) {
        x = (-c) / b;
        outfile << " Persamaan linier, akarnya adalah:" << endl;
        outfile << " x: " << x << endl;
    } else if (d > 0) {
        outfile << " Terdapat dua akar rill:" << endl;
        x1 = ((-b) + sqrt(d)) / (2 * a);
        x2 = ((-b) - sqrt(d)) / (2 * a);
        outfile << " x1: " << x1 << endl;
        outfile << " x2: " << x2 << endl;
    } else if (d == 0) {
        outfile << " Hanya terdapat satu akar rill atau akar kembar:" << endl;
        x = (-b) / (2 * a);
        outfile << " x: " << x << endl;
    } else {
        outfile << " Tidak terdapat akar rill (akar imajiner)" << endl;
    }
    
    outfile.close();  // Close the file after writing
    cout << " Hasil persamaan kuadrat telah disimpan di 'hasil_persamaan_kuadrat.txt'." << endl;

    return 0;
}
