// Simple Throttle program 
// Date Created: 09/29/2020

#include <iostream>
#include <cstdlib>
#include <string> 
#include <cstring>
#include <sstream>

using namespace std; 

class Throttle 
{
public:
	//CONSTRUCTORS
	Throttle();
	Throttle(int size); 	
	// MODIFICATION METHODS 
	void shut_off() { current_position = 0;}
	void shift(int amount);
	//CONSTANT METHODS 
	double flow() const { return current_position / double(top_position);} 
	bool is_on() const { return (current_position > 0);}
	bool is_half_throttle() const { return (current_position > (top_position/2));}
	int get_top_position() const { return top_position;}
private:
	int current_position; 
	int top_position; 
};

int main()
{
	Throttle sample(8); int user_input; 
	// Set the sample throttle to a position indicated by the user 
	cout << "I have a throttle with " << sample.number_gears() << "  positions." << endl; 
	cout << "Where would you like to set the throttle?" << endl; 
	cout << "Please type a number from 0 to " << sample.number_gears() << ":" ; 
	cin >> user_input; 

	sample.shut_off();
	sample.shift(user_input);

	// Shift the throttle down to zero, printing the flow along the way
	while (sample.is_on())
	{
		cout << "The flow is now " << sample.flow() << endl; 
		sample.shift(-1);
	}

	cout << "The flow is now off" << endl;
	return EXIT_SUCCESS; 
}

Throttle::Throttle()
// Precondition: None
// PostCondition: The top_position is set to 1 and the current_position is set to zero
{
	top_position = 1; 
	current_position = 0; 
}

Throttle::Throttle(int size)
// Precondition: size > 0
// PostCondition: The top_position is set to size and the current position is set to zero 
{
	assert(size > 0);
	top_position = size; 
	current_position = 0; 
}	

void Throttle::shift(int amount)
// Precondition: shut_off() has been called at least once to initialize the throttle
// PostCondition: The throttle's position has been moved by amount (but not below or 
// above 6
{
	current_position += amount;

	if(current_position < 0 )
		current_position = 0;
	else if (current_position > top_position)
		current_position = top_position; 
}
