#include <iostream>

using namespace std;

int main() {
     
    // User se number input lo aur uska factorial calculate karo.



    int num ;
    long long  factorial = 1 ;

    cout << "Enter number here: " ; 
    cin >> num ;

    for (int i = 1 ; i<= num ; i++)
    {
        
        factorial = factorial * i ; 

    }

    cout << factorial ;
    return 0;
}