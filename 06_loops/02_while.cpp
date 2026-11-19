#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{

    int employee;
    int i = 1;
    string attendance;
    int absent_count = 0;
    int present_count = 0;

    cout << "Enter Your Employees QTY: ";
    cin >> employee;

    if (employee <= 0)
    {
        cout << "Please enter a valid employee quantity.";
    }
    else
    {
        while (i <= employee)
        {
            cout << "Enter Employee " << i << " Attendace [P/A]" << endl;
            cin >> attendance;

            if (attendance.length() != 1)
            {
                cout << "Enter only one character!" << endl;
                continue;
            }

            attendance[0] = tolower(attendance[0]);

            if (attendance == "p" || attendance == "a")
            {

                if (attendance == "p")
                {
                    present_count++;
                }
                else
                {
                    absent_count++;
                }
            }
            else
            {
                cout << "Invalid Input! Yoy can enter only P and A." << endl;
                continue;
            }
            i++;
        }

        float present_percentage = (float(present_count) / employee) * 100;
        float absent_percentage = (float(absent_count) / employee) * 100;

        cout << endl
             << endl;

        cout << "Total Employees: " << employee << endl;
        cout << "Total Employees Present: " << present_count << endl;
        cout << "Total Employees Absent: " << absent_count << endl;
        cout << "Present Employees ratio: " << present_percentage << "%." << endl;
        cout << "Absent Employees ratio: " << absent_percentage << "%." << endl;
    }

    return 0;
}