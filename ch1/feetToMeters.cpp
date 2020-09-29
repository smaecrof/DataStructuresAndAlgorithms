// Simple program to convert feet to meters 

#include <iostream> 
#include <cassert> 
#include <iomanip> 
#include <cstdlib> 

using namespace std; 

double feet_to_meters(double feet)
// Precondition: feet must be >= 0
// PostCondition: The return value is the value in meters passed in by 'feet' 
{
	assert(feet >= 0); 
	return (feet * 0.3048); 	
}	

void setup_cout_fractions(int fraction_digits)
// Precondition: fraction_digits is not negative 
// PostCondition: All double or float numbers printed to cout will be now rounded to the 
// specified digits on the right of the decimal point 	
{
	assert(fraction_digits > 0 ) ; 
	cout.precision(fraction_digits);
	cout.setf(ios::fixed, ios::floatfield);

	if (fraction_digits == 0)
		cout.unsetf(ios::showpoint);
	else
		cout.setf(ios::showpoint);	
}

int main(){

	const char   HEADING1[]    = "  Feet";
	const char   HEADING2[]    = "Meters"; 
	const char   LABEL1        =      'F';
	const char   LABEL2        =      'M';
	const double TABLE_BEGIN   =	    0;  
       	const double TABLE_END     =       50;
	const double TABLE_STEP    =        2;
	const int    WIDTH         =        9; 
   	const int    DIGITS        =        1;

	double value1; // A value for the tables first column
	double value2; // A value for the tables second column

	// Set up the output for fractions and print the table headings
	setup_cout_fractions(DIGITS);
	cout << "CONVERSIONS from " << TABLE_BEGIN << " to " << TABLE_END << endl; 
	cout << "   " <<  HEADING1 << "        " << HEADING2 << endl; 


	// Each iteration of the loop prints one line of the table 
	for (value1 = TABLE_BEGIN; value1 <= TABLE_END; value1 += TABLE_STEP)	
	{
		value2 = feet_to_meters(value1);
		cout << setw(WIDTH) << value1 << LABEL1 << "  ";
		cout << setw(WIDTH) << value2 << LABEL2 << endl; 
	}

	return EXIT_SUCCESS; 

}
