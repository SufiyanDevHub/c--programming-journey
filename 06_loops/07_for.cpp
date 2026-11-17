#include <iostream>

using namespace std;

int main() {

    int a ;
    int num ; 
    long long  product = 1   ;
    int multiple = 1 ; 

    cout << "Enter number here: " ;
    cin >> num ;


    for (a = 1 ; a <= 10 ; a++)
    {
        multiple = num *a ;
        product = multiple * product ;

        
        
    
    }

    cout << "The 10 multiple of " << num << " is " << product   << "."<< endl;

    return 0;
} 