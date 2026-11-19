#include <iostream>

using namespace std;

int main() {
    int secret_num = 56 ;
    int num ;
    int counter = 1 ;
    cout << "You have only 5 attempts to win the game." << endl ;
    while (true)
    {
        cout << "Enter number here: " ;
        cin >> num ;
        

        if(num == secret_num)
        {
            cout << "congratulation You are win...!" << endl ; 
            cout << "You guess the number in " << counter << " attempts." <<endl ;
            break;
        }
        else if (num > secret_num) {
            cout << "Too High!" << endl;
        }
        else{
            cout << "Too Low" << endl ;
        }

        if (counter == 5)
        {
            cout << "You lose the game!"<< endl ;
            cout << "Secrete Code is " << secret_num << endl ;
            break;
        }

        cout << "Atempts Left...." << 5 - counter  << endl ;
        
        counter++ ;

        
    }

    return 0;
}