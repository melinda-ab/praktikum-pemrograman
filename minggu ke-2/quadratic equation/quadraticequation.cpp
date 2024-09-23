#include <iostream>
#include <cmath>
#include <fstream>  // Include fstream for file handling
using namespace std;

int main () {
    int a, b, c;
    float d, x1, x2, x;
    
    // Open file for writing output
    ofstream outfile("quadratic_solution.txt");
    
    if(!outfile){
        cout<<" Error opening file!"<<endl;
        return 1;
    }
    
    cout<<" Quadratic Equation Solver"<<endl<<endl;
    cout<<"        ax^2+bx+c=0       "<<endl<<endl;
    cout<<" Input coefficients a : ";
    cin>>a;
    cout<<" Input coefficients b : ";
    cin>>b;
    cout<<" Input coefficients c : ";
    cin>>c;
    
    outfile << " Quadratic Equation Solver\n\n";
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
    outfile << " Discriminant: " << d << "\n\n";
    
    // Solve the equation based on the discriminant and value of a
    if (a == 0 && d >= 0) {
        x = (-c) / b;
        outfile << " There is one real root (linear equation):\n";
        outfile << " x: " << x << "\n";
    } else if (d > 0) {
        outfile << " There are two distinct real roots:\n";
        x1 = ((-b) + sqrt(d)) / (2 * a);
        x2 = ((-b) - sqrt(d)) / (2 * a);
        outfile << " x1: " << x1 << "\n";
        outfile << " x2: " << x2 << "\n";
    } else if (d == 0) {
        outfile << " There is exactly one real root:\n";
        x = (-b) / (2 * a);
        outfile << " x: " << x << "\n";
    } else {
        outfile << " There are no real roots (complex roots)\n";
    }
    
    outfile.close();  // Close the file after writing
    cout << " Quadratic solution has been saved in 'quadratic_solution.txt'." << endl;

    return 0;
}
