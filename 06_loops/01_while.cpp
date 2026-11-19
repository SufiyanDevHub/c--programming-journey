// // Scenario: Ek ATM system develop karo jo user ko transactions perform karne de.
// Requirements:
// - Starting balance Rs. 50,000 ho.
// - Menu mein Check Balance, Deposit, Withdraw aur Exit options hon.
// - User jab tak Exit select na kare, menu repeat hota rahe.
// - Insufficient balance par error show ho.
// - Negative amount accept na ho.
// Concepts: While loop, if-else, switch, variables
#include <iostream>

using namespace std;

int main() {

    int balance = 50000 ;
    int num ;
    int deposite  , withdraw;
    int count = 1 ;

    while (true)
    {
        cout << "==================================================" ;
        cout << "Menu..................." <<endl ;
        cout << "Check balance for press 1." << endl ;
        cout << "if you want to deposit money press 2." << endl ;
        cout << "if you want to Withdraw money press 3." << endl ;
        cout << "if you want to Exit Press 0" << endl ;
        cout << "==================================================" <<endl;
        cout << "Enter Number here, what do you want to do....   " ;
        cin >> num ;


        switch (num)
        {
        case 1:
            {
                cout << "Your Balance is: " << balance << endl ;
                break;
            }
        case 2:
            {
                cout << "Enter Amount for deposite: " ; 
                cin >> deposite ; 
                if (deposite >0)
                {
                    balance = balance + deposite;
                    cout << "Deposite Successfull!";
                    

                }
                else{
                    cout << "Invalid Amount";
                }
            }
        case 3:
            {
                cout << "Enter Amount for Withdraw: " ; 
                cin >> withdraw ; 
                if (withdraw > 0 && withdraw<=balance){
                    balance = balance - withdraw;
                    cout << "Deposite Successfull!" << endl ;
                    break;


                }
                else if (withdraw < 0)
                {
                    cout << "Negative Amount not acceptable, Please enter a Valid Amount";
                    break;
                }
                else{
                    cout << "Insufficent Balance! , Please enter a valid Amount.";
                    break;
                }
            }
        
        case 0:
            {
                count++ ;
                
                break;
            }
        }
        if (count == 2){
            cout << "Thank You for Your Time ALLAH HAFIZ.......!";
            break;
        }

    }

    


    return 0;
}