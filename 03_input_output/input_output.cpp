#include <iostream>

using namespace std;
int main()
{
    string name , city ;
    string phone;
    
    // enter name from user 
    cout << "Enter Your name:" << endl;
    getline(cin , name) ;

    // Enter phone number from user 
    cout << "Enter Your Phone Number:" << endl ;
    cin >> phone ;

    // Enter city from user 
    cout << "Enter Your City:" << endl ; 
    cin >> city ;


    // print all inputs 
    cout << "=================================================" << endl ;
    cout << "Your name is " << name << endl;
    cout << "Your city where your live " << city << endl;
    cout << "Your phone number is  " << phone << endl;
    cout << "=================================================" ;
    return 0;
}