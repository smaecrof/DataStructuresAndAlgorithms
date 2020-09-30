// FILE: throttle.h
// CLASS PROVIDED: throttle (part of the namespace s_mae_croft
//
// CONSTRUCTORS for the throttle class 
// 	throttle() 
// 	PostCondition: The throttle has one position above the shut_off() position, and it is 
// 	currently shut off
//
// 	throttle(int size):
// 	Precondition: size > 0
// 	PostCondition: The throttle has size positions above the shut_off position (0), and it 
// 	is currently shut off 
//
// MODIFICATION MEMBER FUNCTIONS for the throttle class 
// 	void shut_off()
// 	PostCondition: The throttle as been turned off
//
// 	void shift(int amount)
// 	PostCondition: The throttle's current position has been moved by amount 
// 	( not below 0 or above the maximum throttle size) 
//
// CONSTANT MEMBER FUNCTIONS for the throttle class 
// 	double flow() const
// 	PostCondition: The value returned is the current flow as a proportion of the 
// 	maximum flow 
//
// 	bool is_on() const
// 	PostCondition: If the throttle's flow is above 0 (current_position > 0) then the 
// 	function will return true; otherwise it returns false
//
// 	bool is_Over_Half_Throttle() const
// 	PostCondition: If the throttle's flow is greater than half the max then the function will 
// 	return true; otherwise it returns false
//
// 	int get_top_position() const
// 	PostCondition: The value returned is the top_position for the throttle object which 
// 	was set during object initialization
//
// VALUE SEMANTICS for the throttle class 
// 	Assignments and the copy constructor may be used with throttle objects 

#ifndef S_MAE_CROFT_THROTTLE
#define S_MAE_CROFT_THROTTLE

namespace s_mae_croft_2A
{
	class throttle
	{
	public:
		// CONSTRUCTORS	
		throttle();
		throttle(int size);
		// MODIFICATION MEMBER FUNCTIONS
		void shut_off() { current_position = 0; }
		void shift(int amount);
		// CONSTANT MEMBER FUNCTIONS 
		double flow() const {return current_position / double(top_position); }
		bool is_on() const { return current_position > 0; } 
		bool is_half_throttle() const { return current_position >= (top_position/2);}
		int get_top_position() const { return top_position; }
	private:
		int current_position; 
		int top_position;
	};
}


#endif
