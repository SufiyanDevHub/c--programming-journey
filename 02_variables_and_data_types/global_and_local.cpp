// #include <iostream>
// using namespace std;
// int main()
// {
//     int id = 8890; // local variable 

//     cout << id << endl ;

//     return 0 ;
// }

// #include <iostream>
// using namespace std;

// int x = 50; // global variable 


// void display(){
    
//     cout << x << endl;
// }

// int main(){

//     cout << x << endl;

//     display();


//     return 0 ;
// }

#include <iostream>
using namespace std;



void display(){
    int x = 50; // loacal variable 
    
    cout << x << endl;
}

int main(){
    

    cout << x << endl; // show error
    
    display(); 


    return 0 ;
}