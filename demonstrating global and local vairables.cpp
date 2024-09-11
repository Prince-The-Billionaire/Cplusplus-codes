#include <iostream>

void function();//function prototype
int x= 5 , y = 7; //global variables
int main(){
	using namespace std;
	
	cout << "X from main: "<< x << endl;
	cout << "y from main : "<< y << endl << endl;
	function();
	cout << "Back from function! "<< endl << endl;
	cout << "x from main :"<<x << endl;
	cout <<"y from main :"<< y << endl;
	return 0;
}
void function(){
	using std::cout ;
	using std::endl;
	int y = 11;//local variables
	// calling the function gives y the value of 11 for only the function
	//we you turn off the function y become the value of the global variable
	cout << "X from function : "<<x << endl;
	cout << "y from function : "<<y << endl;
}
