#include <iostream>
#include <fstream>  // Include fstream for file handling
using namespace std;

int main(){
    int input, multiply, x;

    // Open file for writing output
    ofstream outfile("multiplication_table_output.txt");

    if(!outfile){
        cout<<" Error opening file!"<<endl;
        return 1;
    }

    cout<<" Multiplication table"<<endl;
    cout<<" Input number: ";
    cin>>input;
    cout<<endl;

    x = 0;

    // Write the header to the file
    outfile << " Multiplication table for " << input << endl << endl;

    // Generate and write the multiplication table to the file
    while(x <= 10){
        multiply = input * x;
        outfile << " " << input << " x " << x << " = " << multiply << endl;
        x++;
    }

    // Close the file after writing
    outfile.close();

    cout << " Multiplication table has been saved in 'multiplication_table_output.txt'." << endl;

    return 0;
}
