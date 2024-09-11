//demonstrates proper use of braces in nested if statement
#include <iostream>
int main(){
	int x;
	std::cout << "Enter a number greater than 100 but less than 10: ";
	std::cin >> x;
	std::cout <<"\n";
	
	if(x >= 10)
	{
		if(x > 100)
		{
			std :: cout << "More than 100, Thanks!";
			
		}
	}
	else
	{
		std::cout << "Less than 10, Thanks! \n";
	}
	return 0;
}
