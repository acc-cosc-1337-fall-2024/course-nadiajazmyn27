//write include statements

#include "hwexpressions.h"
#include <iostream>
#include <iomanip>

//write namespace using statement for cout

using namespace std;

int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;

	std::cout << "enter meal amount: ";
	std::cin >> meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	std::cout << "enter tip rate (percentage): ";
	std::cin >> tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = meal_amount + tax_amount + tip_amount;

	// display reciept
	std::cout <<std::fixed << std::setprecision(2);
	std::cout << "Meal Amount: " << meal_amount <<std::endl;
	std::cout << "Sales Tax: " << tax_amount << std::endl;
	std::cout << "Tip Amount: " << tip_amount << std::endl;
	std::cout << "Total: " << total << std::endl;


	

	return 0;
}
