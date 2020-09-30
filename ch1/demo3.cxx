// FILE: demo3.cxx
// This is a small demonstration that shows a circle positioning program 

#include <iostream>
#include <cstdlib>
#include "circle_location.h"
using namespace std;
using s_mae_croft_2A::circle_location;

int main()
{
	circle_location c1;
	int user_input;
	char user_char= 'y';

	while(true)
	{
		cout << "The circle's position is currently at " << c1.get_position() << endl; 
		cout << "Would you like enter a new position?" << endl;
		cout << "Enter (y or n): ";
		cin >> user_char;
		

		if(user_char == 'n') break; 
		
		cout << "\nEnter a new position: ";
		cin >> user_input;

		c1.move_point(user_input); 
	}

	return EXIT_SUCCESS;
}	
