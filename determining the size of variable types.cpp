#include <iostream>
//this program determines the sizeof datatypes
int main(){
	using std::cout;
	cout << "The size of an int is: \t\t"
	<<sizeof(int)  <<"bytes \n";
	cout << "The size of a short int is: \t\t" 
	<<sizeof(short)<<"bytes \n";
	cout << "The size of a long int is: \t\t"
	<<sizeof(long)<<"bytes \n";
	cout << "The size of a char is: \t\t" 
	<<sizeof(char)<<"bytes \n";
	cout << "The size of a float is: \t\t" 
	<<sizeof(float)<<"bytes \n";
	cout << "The size of a double is: \t\t"
	<<sizeof(double)<<"bytes \n";
	cout << "The size of a bool is: \t\t"
	<<sizeof(bool)<<"bytes \n";
	cout << "The size of a unsigned long int: \t\t"
	<<sizeof(unsigned long)<<"bytes \n";
	return 0;
	//the size of function is used to get the size of datatypes
	
	
}
