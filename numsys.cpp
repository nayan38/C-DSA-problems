#include<iostream>
using namespace std;

int decToBinary(int decimal){
    int bny = 0, pwr =1;
    while(decimal>0){
        int remin = decimal%2;
        decimal /=2;
        bny += remin*pwr;
        pwr *=10;
    }

    return bny;

}

int main() {
    int decimal;
    cout << " Enter any decimal number to covert into binary number : ";
    cin >> decimal ;
    cout << " binary conversion is : "<< decToBinary(decimal)<< "\n";
    // for(int i=1 ; i<11 ; i++){
    //     cout << decToBinary(i)<<"\n";
    // }
    return 0;
}