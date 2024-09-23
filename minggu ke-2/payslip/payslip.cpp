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
        cout<<" Error opening file!"<<endl;
        return 1;
    }

    cout<<" Fixed installment and insurance amount (yes/no): ";
    cin>>yn;
    if (yn=="no"){
        cout<<" Installment  : Rp";
        cin>>installment;
        cout<<" Insurance    : Rp";
        cin>>insurance;
    }
    if (yn=="yes"){
        installment = 200000;
        insurance = 150000;
    }
    cout<<endl<<endl;
    
    outfile << "        Payslip for Employee       \n";
    outfile << " ==================================\n";
    cout<<" Name         : ";
    cin>>name;
    outfile << " Name         : " << name << "\n";
    cout<<" Gross Salary : Rp";
    cin>>gross;
    outfile << " Gross Salary : Rp" << gross << "\n";
    
    tax = ((gross*20)/100);
    outfile << " Tax(20%)     : Rp" << tax << "\n";
    outfile << " Installment  : Rp" << installment << "\n";
    outfile << " Insurance    : Rp" << insurance << "\n";
    
    outfile << " ----------------------------------\n";
    net = (gross-tax-installment-insurance);
    
    if (net < 0) {
        outfile << " Net Salary   : -Rp" << (-net) << "\n\n";
        outfile << " You are not financially stable\n";
    } else {
        outfile << " Net Salary   : Rp" << net << "\n\n";
    }

    outfile.close();    // Close the file after writing
    cout << " Payslip has been generated in 'payslip.txt'." << endl;

    return 0;
}
