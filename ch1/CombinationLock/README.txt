AUTHOR: Spencer Mae-Croft
DATE: 10/01/2020

PROJECT DESCRIPTION:
Specify, design, and implement a class that can be used in a program that simulates a combination lock.
The lock has a circular knob, with the numbers 0 through 39 marked on the edge, and it has a three-number
combination, which we call x,y,z. To open the lock, you must turn the knob clockwise at least one entire 
revolution, stopping with x at the top; then turn the knob counter-clockwise, stopping the second time that
y appears at the top; finally turn the knob clockwise again, stopping the next time that z appears at the top. 
At this opon you may open the lock. 

REQUIREMENTS:
* Constructor
    - Requires parameters

* Change Lock Combination Method 
    - Only works if the lock is open 

* turn_dial( DIRECTION, CLICKS)
    - Direction is (CLOCKWISE or COUNTER-CLOCKWISE)

* is_open()
    - Returns if the lock is open or not

* get_current_X() 
    - Returns the current x value (value at the "top" of the lock)