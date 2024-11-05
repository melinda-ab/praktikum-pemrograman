#include <iostream>
using namespace std;

void hitungtotal(int n, double& total, int& count){
    if (n <= 0){
        return;
    }
    double angka;
    cout << " Masukkan angka ke-" << (count + 1) << ": ";
    cin >> angka;
    total += angka;
    count++;
    hitungtotal((n-1), total, count);
}

double rata(int n){
    int count=0;
    double total=0;
    hitungtotal(n, total, count);
    if (count == 0) {
        return 0;
    } else {
        return total / count;
    }
}

int main(){
    int n;
    cout<<" Berapa angka yang ingin dimasukkan? ";
    cin>>n;
    if (n<=0){
        cout<<" Jumlah angka harus lebih besar dari 0.";
    } else{
        double ratarata = rata(n);
        cout<<" Rata-rata dari "<<n<<" nilai yang telah dimasukkan adalah "<<ratarata<<endl;
    }
}