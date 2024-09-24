#include <iostream>
using namespace std;

int main () {
    string name, yn;
    int gross, tax, net;
    int installment, insurance;
    
    yn = "yes";
    name = "Melinda";
    gross = 5000000;

    cout << " Fixed installment and insurance amount (yes/no): " << yn;
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
    
    cout << "        Payslip for Employee       " << endl;
    cout << " ==================================" << endl;
    cout << " Name         : " << name << endl;
    cout << " Gross Salary : Rp" << gross << endl;
    
    tax = ((gross*20)/100);
    cout << " Tax(20%)     : Rp" << tax << endl;
    cout << " Installment  : Rp" << installment << endl;
    cout << " Insurance    : Rp" << insurance << endl;
    
    cout << " ----------------------------------" << endl;
    net = (gross-tax-installment-insurance);
    
    if (net < 0) {
        cout << " Net Salary   : -Rp" << (-net) << endl << endl;
        cout << " You are not financially stable" << endl;
    } else {
        cout << " Net Salary   : Rp" << net << endl << endl;
    }


    return 0;
}
