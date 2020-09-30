// FILE: demo4.cxx
// This is a small demonstration for a clock 

#include <iostream> 
#include <cstdlib>
#include "clock.h"
using namespace std;
using s_mae_croft_2A::clock;

int main()
{
    s_mae_croft_2A::clock clock1; 
    char user_input; 
    int hr; int min; char bNoonChar; bool bNoon;

    // Display clock1's current fields and then prompt user to modify these fields
    while(true)
    {
        cout << "The clocks time reads: " << clock1.get_hour() << ":" << clock1.get_minutes(); 
        if(clock1.is_beforeNoon())
            cout << "A.M." << endl; 
        else 
            cout << "P.M." << endl; 
    
        cout << "Would you like to change the time? " << endl; 
        cout << "Enter (y or n)"; 
        cin >> user_input; 

        if(user_input == 'n')break; 

        cout << "Enter the hour: "; 
        cin >> hr; 
        cout << "\nEnter the minutes: ";
        cin >> min;
        cout << "\nEnter (y or n): "; 
        cin >> bNoonChar; 

        bNoon = (bNoonChar == 'y'); 

        clock1.set_clock(hr, min, bNoon); 
    }
    return EXIT_SUCCESS; 
}
