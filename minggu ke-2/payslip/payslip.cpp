#include <iostream>
#include <fstream>  // Include fstream for file handling
using namespace std;

int main () {
    string name, yn;
    int gross, tax, net;
    int installment, insurance;
    
    // Open file for writing output
    ofstream outfile("payslip.txt");  
    
    if(!outfile){
        cout << " Error opening file!"<<endl;
        return 1;
    }

    cout << " Fixed installment and insurance amount (yes/no): ";
    cin >> yn;
    if (yn=="no"){
        cout << " Installment  : Rp";
        cin >> installment;
        cout << " Insurance    : Rp";
        cin >> insurance;
    }
    if (yn=="yes"){
        installment = 200000;
        insurance = 150000;
    }
    cout << endl << endl;
    
    outfile << "        Payslip for Employee       " << endl;
    outfile << " ==================================" << endl;
    cout << " Name         : ";
    cin >> name;
    outfile << " Name         : " << name << endl;
    cout << " Gross Salary : Rp";
    cin >> gross;
    outfile << " Gross Salary : Rp" << gross << endl;
    
    tax = ((gross*20)/100);
    outfile << " Tax(20%)     : Rp" << tax << endl;
    outfile << " Installment  : Rp" << installment << endl;
    outfile << " Insurance    : Rp" << insurance << endl;
    
    outfile << " ----------------------------------" << endl;
    net = (gross-tax-installment-insurance);
    
    if (net < 0) {
        outfile << " Net Salary   : -Rp" << (-net) << endl << endl;
        outfile << " You are not financially stable" << endl;
    } else {
        outfile << " Net Salary   : Rp" << net << endl << endl;
    }

    outfile.close();    // Close the file after writing
    cout << " Payslip has been generated in 'payslip.txt'." << endl;

    return 0;
}
