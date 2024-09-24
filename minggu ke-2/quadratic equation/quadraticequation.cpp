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
        cout << " Error opening file!"<<endl;
        return 1;
    }
    
    cout << " Quadratic Equation Solver"<<endl<<endl;
    cout << "        ax^2+bx+c=0       "<<endl<<endl;
    cout << " Input coefficients a : ";
    cin >> a;
    cout << " Input coefficients b : ";
    cin >> b;
    cout << " Input coefficients c : ";
    cin >> c;
    
    outfile << " Quadratic Equation Solver" << endl << endl;
    outfile << "    ax^2 + bx + c = 0" << endl << endl;
    
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
    outfile << " Discriminant: " << d << endl << endl;
    
    // Solve the equation based on the discriminant and value of a
    if (a == 0 && d >= 0) {
        x = (-c) / b;
        outfile << " There is one real root (linear equation):" << endl;
        outfile << " x: " << x  << endl;
    } else if (d > 0) {
        outfile << " There are two distinct real roots:" << endl;
        x1 = ((-b) + sqrt(d)) / (2 * a);
        x2 = ((-b) - sqrt(d)) / (2 * a);
        outfile << " x1: " << x1 << endl;
        outfile << " x2: " << x2 << endl;
    } else if (d == 0) {
        outfile << " There is exactly one real root:" << endl;
        x = (-b) / (2 * a);
        outfile << " x: " << x << endl;
    } else {
        outfile << " There are no real roots (complex roots)" << endl;
    }
    
    outfile.close();  // Close the file after writing
    cout << " Quadratic solution has been saved in 'quadratic_solution.txt'." << endl;

    return 0;
}
