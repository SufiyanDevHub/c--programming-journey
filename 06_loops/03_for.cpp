#include <iostream>

using namespace std;

int main() {

    int i ; 

    // condition print ony odd numbers 1 to 20 

    for (i = 1 ; i <= 20 ; i ++ )
        {
            if (i%2 == 1 ){
                cout << i << endl ; 
            }
        }

    return 0;
}