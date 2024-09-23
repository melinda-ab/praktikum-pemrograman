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
        cout<<" Error opening file!"<<endl;
        return 1;
    }

    cout<<" Diskriminan dan Akar Persamaan Kuadrat"<<endl<<endl;
    cout<<"        ax^2+bx+c=0       "<<endl<<endl;
    cout<<" Input koefisien a : ";
    cin>>a;
    cout<<" Input koefisien b : ";
    cin>>b;
    cout<<" Input koefisien c : ";
    cin>>c;
    
    outfile << " Diskriminan dan Akar Persamaan Kuadrat\n\n";
    outfile << "        ax^2 + bx + c = 0\n\n";
    
    // Display equation based on the input coefficients
    if (a == 1) {
        outfile << " x^2 + (" << b << ")x + (" << c << ") = 0\n\n";
    } else if (a == -1) {
        outfile << " -x^2 + (" << b << ")x + (" << c << ") = 0\n\n";
    } else if (a == 0) {
        outfile << " (" << b << ")x + (" << c << ") = 0\n\n";
    } else {
        outfile << " (" << a << ")x^2 + (" << b << ")x + (" << c << ") = 0\n\n";
    }
    
    // Calculate discriminant
    d = (b * b) - (4 * a * c);
    outfile << " Diskriminan: " << d << "\n\n";
    
    // Solve the equation based on the discriminant and value of a
    if (a == 0 && d >= 0) {
        x = (-c) / b;
        outfile << " Persamaan linier, akarnya adalah:\n";
        outfile << " x: " << x << "\n";
    } else if (d > 0) {
        outfile << " Terdapat dua akar rill:\n";
        x1 = ((-b) + sqrt(d)) / (2 * a);
        x2 = ((-b) - sqrt(d)) / (2 * a);
        outfile << " x1: " << x1 << "\n";
        outfile << " x2: " << x2 << "\n";
    } else if (d == 0) {
        outfile << " Hanya terdapat satu akar rill atau akar kembar:\n";
        x = (-b) / (2 * a);
        outfile << " x: " << x << "\n";
    } else {
        outfile << " Tidak terdapat akar rill (akar imajiner)\n";
    }
    
    outfile.close();  // Close the file after writing
    cout << " Hasil persamaan kuadrat telah disimpan di 'hasil_persamaan_kuadrat.txt'." << endl;

    return 0;
}
