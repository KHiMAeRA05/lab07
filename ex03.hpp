#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
T init() {
    T bill;
    T tiptotal;
    T total;
    T tip;
    cout<<"\n\nWelcome to tip Calculator\n";
    cout <<"------------------------------\n";
    cout << "Enter bill amount: "<<"$";
    cin >> bill;

    cout << "Enter Tip: "<<"%";
    cin >> tip;

    if (tip < 20) {
        cout<< "\n Oh you can give a better tip than that!\n";
        char ans;
        do {
            cout<< "Do you want to continue (Y/N)?\n";
            cout<< "You must type a 'Y' or an 'N'.\n";
            cin >> ans;
        }
        while((ans !='Y')&&(ans !='N')&&(ans !='y')&&(ans !='n'));
        return tip;
    }
    else {

        tiptotal = bill * (tip/100.);
        total = (tiptotal + bill);
        cout << "The total Bill with Tip is: "<<"$"<< total << "\n\n";
        cout << "You are helping me through College!! Thankyou!!\n";
    }

}

int main(){
    init<double>();

    return 0;
}
