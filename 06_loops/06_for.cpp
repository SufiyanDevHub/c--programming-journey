#include <iostream>

using namespace std;

int main() {

    int i ;
    int sum = 0 ;

    for (i = 1 ; i <=100  ; i++)
    {
        sum += i ; // sum = sum + i 

    }
    cout << "The sum of all numbers between 1 to 100 is " << sum << endl ; 

    return 0;
}