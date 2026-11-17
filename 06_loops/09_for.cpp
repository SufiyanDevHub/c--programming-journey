#include <iostream>

using namespace std;

int main() {

    int i ; 
    int  odd = 0 ;
    int  even = 0 ;

    for (i=1  ; i <=50 ; i++)
    {

        if (i % 2  == 0 ){
            even++ ; 
        }
        else {
            odd++ ;
        }


    }

    cout <<"Total even numbers between 1 to 50 is " << even << "." << endl;
    cout <<"Total odd numbers between 1 to 50 is " << odd << "." << endl;


    return 0;
}