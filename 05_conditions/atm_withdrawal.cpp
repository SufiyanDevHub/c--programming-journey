#include <iostream>

using namespace std;

int main() {
    int pin_code = 1234 ;
    int PIN ;
    int balance , Withdrawal;
    int charges = 0 ;
    int remaining_balance ;


    cout << "Enter Your PIN Code: " ;
    cin >> PIN ;

    if (PIN == pin_code) {

        cout << "Enter Balance Amount: " ;
        cin >> balance;

        cout << "Enter withdrawal Amount: " ;
        cin >> Withdrawal;

        if (Withdrawal > 0 && Withdrawal <= balance)
        {
            if (Withdrawal > 5000)
            {
                charges += 50 ;
            }
            
            remaining_balance = balance - charges - Withdrawal ;
            cout << "Transaction Successfull!" << endl ;
            cout << "Withdrawal Amount: " << Withdrawal << endl ;
            cout << "Charges: " << charges << endl ;
            cout << "Remaining Balance: " << remaining_balance << endl ;

            if (remaining_balance < 1000)
            {
                cout << "Low Balance Warning!";
            }

        }
        else if (Withdrawal > balance)
        {
            cout << "Invalid Withdrawal Amount";
        }

        else{
            cout << "Insufficent Balance!";
        }

    }
    else{
        cout << "Invalid PIN Code";
    }


    return 0;
}