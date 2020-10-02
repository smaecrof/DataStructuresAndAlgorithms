// FILE: demo5.cxx
// This is a small demonstration of a combination lock

#include <iostream>
#include <cstdlib>
#include <string>
#include "combinationLock.h"

using namespace std;
using s_mae_croft_2A::combinationLock;

int main()
{
    s_mae_croft_2A::combinationLock lock(7,30,20);
    std::string lock_direction; 
    std::string lock_state;
    char user_choice; 
    int number_clicks; 
    int user_int_choice; 
    int x; int y; int z; 

    // Display prompt to gather user input 
    while(true)
    {
        if(lock.is_open()){
            lock_state = "unlocked";
        } 
        else
        {
            lock_state = "locked";
        }

        cout << "\nCombination Lock is currently " << lock_state << endl; 
        cout << "Here are the following possible actions:" << endl;
        cout << "1: Enter a 1 to use turn_dial()" << 
            "\n2: Enter a 2 to attempt to unlock the lock" <<
            "\n3: Enter a 3 to see which click number the 'X' is on" <<
            "\n4: Enter a 4 to attempt ot reset the combination for the lock"<<
            "\n5: Enter a 5 to quit the application" << 
            "\n>> ";
        cin >> user_int_choice; 

        if(user_int_choice == 1) // USE TURN_DIAL()
        {
            while(user_choice != 'n')
            {
                lock.get_internals(); 
                cout << "Would you like to turn the dial (Enter 'y' or 'n'): ";
                cin >> user_choice; 

                if(user_choice == 'y')
                {
                    cout << "Specify a direction to turn the dial:" << 
                    "\nEnter 'Clock' for clockwise " <<
                    "\nEnter 'Counter' for counter-clockwise" <<
                    "\n>> ";
                    cin >> lock_direction; 

                    cout << "Specify how many clicks to turn: ";
                    cin >> number_clicks;

                    lock.turn_dial(lock_direction, number_clicks); 
                } 
            }
        }

        if(user_int_choice == 2) // ATTEMPT TO UNLOCK THE LOCK
        {
            bool was_unlocked = lock.attempt_lock_open();
            if(was_unlocked)
            {
                cout << "Lock was successfully unlocked" << endl;
            }
            cout << "The lock was not unlocked" << endl; 
        }

        if(user_int_choice == 3)  // PEEK DIAL X VALUE 
        {
            cout << "The dial is currently pointing to " << lock.peek_x() << endl;
        }

        if(user_int_choice == 4)  // ATTEMPT TO RESET COMBINATION FOR LOCK 
        {
            if(lock.is_open())
            {
                cout << "Enter the first combination value: ";
                cin >> x;
                cout << "Enter the second combination value: ";
                cin >> y;
                cout << "Enter the third combination value: " ;
                cin >> z;
                if(lock.reset_combination(x,y,z) == true){
                    cout << "New combination has been set and the lock has been locked" << endl;
                }
            }
            cout << "ERROR: Combination was not changed" << endl; 
        }

        if(user_int_choice == 5) // EXITING THE APPLICATION 
        {
            break; 
        }
    }
    return EXIT_SUCCESS; 
}


