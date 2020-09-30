// FILE: circle_location.cxx
// CLASS IMPLEMENTED: circle_location (see circle_location.h for documentation)

#include "circle_location.h"

namespace s_mae_croft_2A
{
	
	circle_location::circle_location()
	{
		position = 0;
	}

	circle_location::circle_location(int pos)
	{
		position = pos; 
	}

	void circle_location::move_point(int degree)
	{
		position += degree; 

		while(position > 360)
		{
			position -= 360; 
		}

		while(position < 0)
		{
			position += 360;
		}
	}
}
