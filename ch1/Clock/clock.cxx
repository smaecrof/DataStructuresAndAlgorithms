// FILE: clock.cxx
// CLASS IMPLEMENTED: clock (see clock.h for documentation)

#include <cassert>
#include "clock.h"

namespace s_mae_croft_2A
{
    clock::clock()
    {
        hour = 12;
        minutes = 0; 
        beforeNoon = true;
    }

    clock::clock(int hour, int minutes, bool beforeNoon)
    {
        set_clock(hour, minutes, beforeNoon); 
    }

    void clock::set_clock(int hr, int min, bool bNoon)
    {
        assert(hr <= 12 && hr > 0);
        assert(min >= 0 && min < 60); 

        hour = hr; 
        minutes = min;
        beforeNoon = bNoon; 
    }
}