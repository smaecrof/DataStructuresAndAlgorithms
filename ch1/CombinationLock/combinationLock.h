// FILE: combinationLock.h 
// CLASS PROVIDED: combinationLock (part of the namespace s_mae_croft_2A)
//
// CONSTRUCTORS for the combinationLock class
//      combinationLock(int x1, int y1, int z1)
//      PostCondition: The combination lock will be set to the sequence (x1,y1,z1)
//
// MODIFICATION MEMBER FUNCTIONS for the combinationLock class
//      void reset_combination(int x1, int y1, int z1)
//      Precondition: The combinationLock object's is_open field must be true to reset
//      PostCondition: The combinationLock object's combination will be reset to (x1,y1,z1) 
//                     and will automatically be set to the locked position 
//
//      void turn_dial(String direction, int clicks)
//      PostCondition: If the sequence, direction, and number of clicks results in the current 
//                     location of the lock to be the same as the requried combination part. 
//
// CONSTANT MEMBER FUNCTIONS for the combinationLock class 
//      int get_X() const
//      PostCondition: Returns current value the dial is point to 
//
//      bool is_open() const
//      PostCondition: 
