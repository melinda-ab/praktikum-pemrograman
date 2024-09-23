#include <iostream>
#include <fstream>  // Include fstream for file handling
using namespace std;

int main(){
    int input, sum, n, x;
    
    // Open file for writing output
    ofstream outfile("accumulative_sum_output.txt");
    
    if(!outfile){
        cout<<" Error opening file!"<<endl;
        return 1;
    }

    cout<<" Accumulate The Sum"<<endl;
    cout<<" Input number: ";
    cin>>input;
    cout<<endl;
    
    n = 0;
    sum = 0;

    // Write output to file
    outfile << " Accumulate The Sum\n";
    outfile << " Input number: " << input << "\n\n";

    while (n <= input) {
        outfile << n << " ";  // Write each number to the file
        x = sum + n;
        sum = x;
        n++;
    }

    outfile << "\n\n";
    outfile << " The accumulative sum is: " << sum << endl;

    // Close the file after writing
    outfile.close();

    cout << " The accumulative sum has been saved in 'accumulative_sum_output.txt'." << endl;

    return 0;
}
