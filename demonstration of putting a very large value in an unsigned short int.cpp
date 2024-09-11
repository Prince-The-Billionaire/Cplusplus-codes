#include <iostream>

int main(){
	using std::cout;
	using std::endl;
	
	unsigned short int smallnumber;
	smallnumber = 65535;
	cout << "smallnumber: "<< smallnumber <<endl;
	smallnumber++;
	//when the number is above the space allocated for the variable type it wraps back to the beginning that is why itt prints zero
	cout << "smallnumber: "<< smallnumber <<endl;
	smallnumber++;
	cout << "smallnumber: "<< smallnumber <<endl;
	return 0;
}
