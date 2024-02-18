//write include statements

#include "decisions.h"
#include <iostream>

int main() 
{
	int option, grade;
	std::cout << "MAIN MENU\n\n1-Letter grade using if\n2-Letter grade using switch\n3-Exit\n\n";
	std::cin >> option;

	if(option == 1 || option == 2) {
		std::cout <<"Enter a numerical grade (0-100): ";
		std::cin >> grade;
		if (grade < 0 || grade > 100) {
			std::cout << "Number is out of range. \n";
	    } else {
			std::string result = (option == 1) ? get_letter_grade_using_if(grade) : get_letter_grade_using_switch(grade);
			std::cout << "The letter grade is: " << result << std::endl;
		}
	} else if (option == 3) {
		std::cout << "Exciting...\n";
	} else {
			std::cout << "Invalid option. \n";
	}
	




	return 0;
}