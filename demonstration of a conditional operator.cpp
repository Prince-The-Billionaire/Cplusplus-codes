// demonstrates the conditional operator
#include <iostream>
int main(){
	using namespace std;
	
	int x, y, z;
	cout << "Enter two numbers. \n";
	cout << "First: ";
	cin >> x;
	cout << "\nSecond: ";
	cin >> y;
	cout << "\n";
	if (x > y){
		z = x;
	}
	else{
		z = y;
	}
	cout << "After if test , z: "<<z;
	cout << "\n";
	z = (x > y) ? x: y; //this is a ternary operator it does what the if else statement above does
	// the code above means that if x is greater than y then z is equal to x else z is equal to y
	cout << "After conditional test , z : " << z;
	cout << "\n";
	return 0;
	
	
}
