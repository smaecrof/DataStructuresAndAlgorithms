// FILE: throttle.cxx
// CLASS IMPLEMENTED: Throttle (see Throttle.h for documentation)

#include <cassert>
#include "throttle.h"
//using namespace std; 

namespace s_mae_croft_2A
{
	throttle::throttle()
	{ // A simple on-off throttle
		top_position = 1;
		current_position = 0;
	}

	throttle::throttle(int size)
	{  // Library facilities used: cassert
		assert(size > 0);
		top_position = size; 
		current_position = 0; 
	}

	void throttle::shift(int amount)
	{
		current_position += amount; 

		if(current_position < 0)
			current_position = 0;
		else if (current_position > top_position)
			current_position = top_position;
	}
}
