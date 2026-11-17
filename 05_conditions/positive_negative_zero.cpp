#include <iostream>

using namespace std ;

int main()
{

    int num ; 

    cout << "Enter number here: ";
    cin >> num ;

    if (num>0){
        cout << num << " is POsitive number." << endl;
    }
    else if (num == 0){
        cout << "You entered zero." << endl;
    }
    else 
    {
        cout << num << " is neagative number." << endl ;
    }



    return 0 ;
    }