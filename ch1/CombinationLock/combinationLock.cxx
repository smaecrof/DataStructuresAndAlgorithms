// FILE: combinationLock.cxx
// CLASS IMPLEMENTED: combinationLock (see combinationLock.h for documentation)

#include <string>
#include <iostream>
#include <cstdlib>
#include "combinationLock.h"
using namespace std; 


namespace s_mae_croft_2A
{
    combinationLock::combinationLock(int x1, int y1, int z1)
    {
        x = x1;
        y = y1;
        z = z1;
        isOpen = false;
        currentX= 0;
        t1 = false;
        t2 = false;
        t3 = false; 
    }

    bool combinationLock::reset_combination(int x1, int y1, int z1)
    {
        if(isOpen){
            x = x1;
            y = y1;
            z = z1;
            isOpen = false;
            return true; 
        }
        return false; 
    }

    void combinationLock::turn_dial(std::string direction, int clicks) 
    {
        if (direction == "Clock")
        {   
            if(clicks > 39)
            {
                t1 = false;
                t2 = false;
                t3 = false; 
                currentX = clicks - 40;

                if(currentX == x) t1 = true;
                return; 
            }
            else 
            {
                if(t1 != true)
                {
                    currentX = currentX + clicks;
                    t2 = false;
                    t3 = false;
                    return;
                }

                currentX = clicks - (40 - currentX);
                if(t1 == true && t2 == true && currentX == z)
                {
                    t3 = true;
                } 
                else 
                {
                    t1 = false;
                    t2 = false;
                    t3 = false;
                }
                return;
            }
        }
        else 
        {
            if(t1 == false)
            {
                t2 = false;
                t3 = false;
                return;
            }

            currentX = currentX - clicks; 
            if(currentX < 0)
            {
                currentX = 40 + currentX; 
            }
            if(currentX == y)
            {
                t2 = true; 
            } 
            else 
            {
                t1 = false;
                t3 = false;
            }
            return; 
        }
    }
    
    bool combinationLock::attempt_lock_open()
    {
        if(isOpen) 
        {
            return true;
        }
        if(t1 == true && t2 == true && t3 == true){
            isOpen = true;
            return true;
        }
        return false; 
    }

    void combinationLock::get_internals() const
    {
        cout << "\ncurrentX: " << currentX << endl;
        cout << "t1: " << t1 << endl;
        cout << "t2: " << t2 << endl;
        cout << "t3: " << t3 << endl;
        cout << "isOpen: " << isOpen << endl; 
    }
}