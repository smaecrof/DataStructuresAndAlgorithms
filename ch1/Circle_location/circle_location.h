// FILE: circle_location.h
// CLASS PROVIDED: circle_location (part of namespace s_mae_croft_2A)
//
// CONSTRUCTORS for the circle_location class 
// 	circle_location()
// 	PostCondition: The circle's positions is set to the 12 o'oclock position (0/360 degree mark) 
//
// 	circle_location(int pos)
// 	Precondition: 0 <= pos <= 360
// 	PostCondition: The circle's position will be set to the position 
//
// MODIFICATION MEMBER FUNCTIONS for the circle_location class
//	void move_point(int degree)
//	PostCondition: The cirlce's position will be move clock-wise for a positive degree and 
//	counter-clockwise for a negative degree input
//
// CONSTANT MEMBER FUNCTIONS for the circle_location class 
// 	void get_position() const
// 	PostConditions: The value returned is the position of the clock object
//
// VALUE SEMANTICS for the circle_location class
// 	Assignments and the copy constructor may be used with the circle_location objects 

#ifndef S_MAE_CROFT_CIRCLE_LOCATION
#define S_MAE_CROFT_CIRCLE_LOCATION

namespace s_mae_croft_2A
{
	class circle_location
	{
	public:
		// CONSTRUCTORS
		circle_location();
		circle_location(int pos);
		// MODIFICATION MEMBER FUNCTIONS 
		void move_point(int degree);
		// CONSTANT MEMBER FUNCTIONS 
		int get_position() const { return position; } 
	private:
		int position; 
	};
}

#endif
