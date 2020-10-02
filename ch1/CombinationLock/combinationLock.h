// FILE: combinationLock.h 
// CLASS PROVIDED: combinationLock (part of the namespace s_mae_croft_2A)
//
// CONSTRUCTORS for the combinationLock class
//      combinationLock(int x1, int y1, int z1)
//      PostCondition: The combination lock will be set to the sequence (x1,y1,z1)
//
// MODIFICATION MEMBER FUNCTIONS for the combinationLock class
//      bool reset_combination(int x1, int y1, int z1)
//      PostCondition: The combinationLock object's combination will be reset to (x1,y1,z1) 
//                     and will automatically be set to the locked position if isOpen is true.
//                     Return value will be false if the isOpen property is false, therefore,
//                     the lock combination cannot be changed. 
//
//      void turn_dial(String direction, int clicks)
//      PostCondition: If the sequence, direction, and number of clicks results in the current 
//                     location of the lock to be the same as the requried combination part. 
//
//      bool attempt_lock_open()
//      PostCondition: If the lock combination input in the previous actions were correct, then
//                     the lock will be opened and true will be returned; otherwise the lock
//                     will stay locked and false will be returned 
//
// CONSTANT MEMBER FUNCTIONS for the combinationLock class 
//      int peek_X() const
//      PostCondition: Returns current value the dial is point to 
//
//      bool is_open() const
//      PostCondition: Returns whether the lock is open 
//
// VALUE SEMANTICS for the combinationLock object 
//      Assignments and the copy constructor may be used with combinationLock objects 

#ifndef S_MAE_CROFT_2A
#define S_MAE_CROFT_2A
#include <string>


namespace s_mae_croft_2A
{
    class combinationLock
    {
        public:
            // CONSTRUCTORS 
            combinationLock(int x1, int y1, int z1);
            // MODIFICATION MEMEBER FUNCTIONS 
            bool reset_combination(int x1, int y1, int z1);
            void turn_dial(std::string direction, int clicks);
            bool attempt_lock_open(); 
            // CONSTANT MEMBER FUNCTIONS 
            int peek_x() const { return currentX; }
            bool is_open() const { return isOpen; }
            void get_internals() const; 
        private:
            int currentX;
            int x,y,z;
            bool isOpen, t1,t2,t3; 
    };
}

#endif