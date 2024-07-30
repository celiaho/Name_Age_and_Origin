// Description: This program 
//		customizes the title bar;
//		customizes the color of the cmp window;
//		prints a centered banner using the WYSIWYG approach;
//		prints a statement with user's city and calculated age;
//		holds the screen so the user will see the final message; and
//		illustrates use of
//			strings, 
//			constant variables, 
//			escape sequences, 
//			cin functions and methods, and 
//			removing extra data from the keyboard buffer so the next input starts fresh. 
//		Instruction file: https://bhcc.digication.com/cit120all_master_delta/
// Title: Name, Age and Origin
// Programmer: C. Ho
// Last Modified: Fri. Sept. 29, 2023 @ 2:34 PM

// PREPROCESSOR DIRECTIVE SECTION
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// FUNCTION DECLARATION SECTION, INCLUDING FUNCTION PROTOTYPES - N/A IN THIS LAB

// MAIN SUB-SECTION
int main()
{
	// SET UP SECTION
	// System function call to change the text in title bar
	system("title Strings, Constant Variables, Escape Sequences, and cin Functions + Methods     by C. Ho");
	// System function call to change the color of the cmp window (background, foreground)
	system("color E1");

	// Centered banner using the WYSIWYG approach
	cout << "\n"
		<< "\t\t\t                   Full name, year of birth and city                 \n"
		<< "\t\t\t       Not as easy as it looks - the devil is in the details!        \n"
		<< "\t\t\t                Make sure you test EVERY possible input.             \n"
		<< "\t\t\t             Name and city can have 1, 2, 3, or more parts.          \n"
		<< "\t\t\t   After the year born there could be another input in that line.    \n"
		<< "\t\t\t                       Base year is set to 2023.                     \n"
		<< "\t\t\t Make sure you follow all the learning outcomes of the previous lab. \n"
		<< "\t\t\t                                Lab #2                               \n" 
		<< "\t\t\t                               by C. Ho                              \n\n\n";

	// VARIABLE DECLARATION SECTION
	string name, city;
	int yearOfBirth;
	const int CURRENT_YEAR = 2023;

	// INPUT SECTION
	// Get the user's name.
	cout << "Please enter your name: ";
	getline(cin, name);											// Store all input in variable "name" so spaces and other characters can be used.
	
	// Get the user's year of birth.
	cout << "What year were you born, \"" << name << "\"? ";	// Optional: Validate input so that YOB cannot exceed current year
	cin >> yearOfBirth;
	cin.ignore(1000,'\n');										// Ignore input after year of birth. 
	
	// Get the user's city.
	cout << "Enter the city you live in: ";
	getline(cin, city);											// Store all input in variable "city" so spaces and other characters can be used. 

	// PROCESSING SECTION - N/A IN THIS LAB

	// OUTPUT SECTION
	// Print a statement with user's city and calculated age.
	cout << "\n   You are from \"" << city << "\" and as of 2023 you are " << CURRENT_YEAR - yearOfBirth << " years old.\n\n";

	// CLEAN UP SECTION
	// Hold the screen so user will see the final message.
	system("pause");
	return 0;
}