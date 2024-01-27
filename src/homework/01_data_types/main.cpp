//write include statements
#include <isostream>

//write namespace using statement for cout
using std::count;
using std::cin;
int main()
{
	int num = 0;

	cout<<"Enter a number: ";
	cin>>num;//value from keyboard saved into the num variable

int result = 0;
result = multiply_numbers(num);

cout<<"value is: "<<result<<"\n";

	return 0;
}
