//demonstrates subtraction and integer overflow
#include <iostream>

int main(){
	using std:: cout;
	using std:: endl;
	
	unsigned int difference;
	unsigned int bignumber = 100;
	unsigned int smallnumber = 50;
	difference = bignumber - smallnumber;
	cout << "Difference is :" << difference;
	
	difference = smallnumber - bignumber;
	cout << "\nNow difference is : " << difference << endl;
	return 0;
	
}
