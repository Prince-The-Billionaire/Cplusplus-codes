//demonstrates if statements with else clause
#include <iostream>

int main(){
	using std::cout;
	using std::cin;
	
	int firstNumber, secondNumber;
	cout << "Please enter a big number : ";
	cin >> firstNumber;
	cout << "\nplease enter a smaller number : ";
	cin >> secondNumber;
	if (firstNumber > secondNumber){
		cout << "\nTHANKS!!!!!!!!!!!!!!";
	}
	else {
		cout << "\n OOPS!!, the first number is not bigger";
	}
	return 0;
}
