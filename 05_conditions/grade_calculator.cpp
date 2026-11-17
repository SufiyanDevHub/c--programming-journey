#include <iostream>

using namespace std ;

int main()
{
    string grade ;
    float total_marks = 500.0 ; 
    float mark1 , mark2 , mark3 , mark4 , mark5 ; 

    cout << "Enter Mark1: " << endl;
    cin >> mark1 ;
    cout << "Enter Mark2: " << endl;
    cin >> mark2 ;
    cout << "Enter Mark3: " << endl;
    cin >> mark3 ;
    cout << "Enter Mark4: " << endl;
    cin >> mark4 ;
    cout << "Enter Mark5: " << endl;
    cin >> mark5 ;



    float obtain_marks = mark1 + mark2 + mark3 + mark4 + mark5 ; 
    float percentage = (obtain_marks / total_marks) * 100 ; 

    if (mark1 > 100 ||  mark2 > 100 ||  mark3 > 100 || mark4 > 100 ||  mark5 > 100 )
    {
        cout << "Invalid Input , marks should be less than or equal to 100." ;
    }

    else {

   
   

        if (percentage>=90 && percentage<=100)
        {
        grade = "A++" ;
        }
        else if (percentage>=80 && percentage <90)
        {
            grade = "A" ;
        }
        else if (percentage>=70 && percentage<80)
        {
            grade = "B" ;
        }
        else if (percentage>=60 && percentage< 70)
        {
            grade = "C" ;
        }
        else if (percentage>=50 && percentage< 60)
        {
            grade = "D" ;
        }
        else if (percentage>=40 && percentage< 50){
            grade = "E" ;
        }
        else
        {
            grade = "F" ;
        }

        cout << "===============================================================" << endl ;
        cout << "You get total marks in all subject is " << obtain_marks << endl ; 
        cout <<"Your percentage is "<< percentage << "%" << endl ; 
        cout << "Your grade is " << grade << endl ; 
        cout << "===============================================================" << endl ;
        
    }

    
    return 0 ;
}
