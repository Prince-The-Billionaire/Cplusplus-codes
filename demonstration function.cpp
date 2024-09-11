#include <iostream>
//function demonstration function
//prints out a useful message

void Demonstrationfunction(){
	std::cout << "In Demonstration function \n";
}
//function main prints out a message then,
//calls Demonstrationfunction, then prints out
// a second message

int main(){
	std::cout <<"In main \n";
	Demonstrationfunction();
	std::cout <<"Back to main \n";
	return 0;
	
}
