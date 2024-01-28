//write include statements
#include <iostream>

//write namespace using statement for cout

int multiply_numbers(int num) {
	return num * 2;
}

int main()
{
	int num = 0;

	std::cout<< "Enter a number: ";
	std::cin>> num;

int result = multiply_numbers(num);
std::cout<<"Value is: " << result << "\n";

int num1 = 4;

result = multiply_numbers(num1);
std::cout << "value is: " << result << "n";

	return 0;
}
