// FILE: clock.h
// CLASS PROVIDED: clock (part of the namespace s_mae_croft_2A)
//
// CONSTRUCTORS for the clock class
//      clock()
//      PostCondition: The clock object will have its time set to midnight (12:00 A.M)
// 
//      clock(int hour, int minutes, bool beforeNoon)
//      Precondition: hour > 0 and hour <= 12
//                minutes >= 0 and minutes < 60
//      PostCondition: The clock object will have it's time set to the specified time 
//
// MODIFICATION MEMBER FUNCTIONS for the clock class 
//      void set_clock(int hr, int min, bool bNoon)
//      Preconditions: hr > 0 and hr <= 12
//                min >= 0 and min < 60
//      PostCondition: The clock object will be set to the newly specified time
//
// CONSTANT MEMBER FUNCTIONS for the clock class
//      int get_hour() const
//      PostCondition: The value returned is the clock object's hour field
// 
//      int get_minutes() const 
//      PostCondition: The value returned is the clock object's minutes field
// 
//      bool is_beforeNoon() const
//      PostCondition: The value returned will be true if the clock object's time is beforeNoon; 
//      otherwise false will be returned
//
// VALUE SEMANTICS for the clock object
//      Assignments and the copy constructor may be used with clock objects 

#ifndef S_MAE_CROFT_CLOCK
#define S_MAE_CROFT_CLOCK

namespace s_mae_croft_2A
{
    class clock
    {
    public:
        // CONSTRUCTORS
        clock();
        clock(int hour, int minutes, bool beforeNoon); 
        // MODIFICATION MEMBER FUNCTIONS 
        void set_clock(int hr, int min, bool bNoon);
        // CONSTANT MEMBER FUNCTIONS 
        int get_hour() const { return hour; }
        int get_minutes() const { return minutes; }
        bool is_beforeNoon() const { return beforeNoon; }
    private:
        int hour;
        int minutes;
        bool beforeNoon; 
    };
}

#endif
