#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int a,b,c;
    float d,x1,x2,x;
    cout<<" Diskriminan dan Akar Persamaan Kuadrat"<<endl<<endl;
    cout<<"        ax^2+bx+c=0       "<<endl<<endl;
    cout<<" Input koefisien a : ";
    cin>>a;
    cout<<" Input koefisien b : ";
    cin>>b;
    cout<<" Input koefisien c : ";
    cin>>c;
    
    cout<<endl;
    if (a==1) {
        cout<<" x^2+("<<b<<")x+("<<c<<")=0"<<endl<<endl;}
    else if (a==-1) {
        cout<<" -x^2+("<<b<<")x+("<<c<<")=0"<<endl<<endl;}
    else if (a==0) {
        cout<<" ("<<b<<")x+("<<c<<")=0"<<endl<<endl;}
    else {
        cout<<" ("<<a<<")x^2+("<<b<<")x+("<<c<<")=0"<<endl<<endl;}
    
    d = (b*b)-(4*a*c);
    cout<<" Diskirimnan : "<<d<<endl<<endl;
    if (a==0&&d>=0){
        x = (-c)/b;
        cout<<" x : "<<x<<endl;
    }
    else if (d>0) {
        cout<<" Terdapat dua akar rill"<<endl;
        x1 = (((-b)+sqrt(d))/(2*a));
        x2 = (((-b)-sqrt(d))/(2*a));
        cout<<" x1 : "<<x1<<endl;
        cout<<" x2 : "<<x2<<endl;
    }
    else if (d==0) {
        cout<<" Hanya terdapat satu akar rill atau akar kembar"<<endl;
        x = ((-b)/(2*a));
        cout<<" x : "<<x<<endl;
    }
    else {
        cout<<" Tidak terdapat akar rill";
    }
    return 0;
}
