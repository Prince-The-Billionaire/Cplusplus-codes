// demonstrates function polymorphism
#include <iostream>

int Double(int);
float Double(float);
double Double(double);
long Double(long);
char Double(char);

using namespace std;

int main(){
	int myInt = 6500;
	long myLong = 65000;
	float myFloat = 6.5F;
	double myDouble = 6.5e20;
	char myChar = 'a';
	int DoubledInt;
	long DoubledLong;
	float DoubledFloat;
	double DoubledDouble;
	char DoubledChar;
	
	cout << "my Int :" << myInt << "\n";
	cout << "my Long :" << myLong << "\n";
	cout << "my float :" << myFloat << "\n";
	cout << "my double :"<<myDouble << "\n";
	cout << "my char :" <<myChar << "\n";
	DoubledInt = Double(myInt);
	DoubledLong = Double(myLong);
	DoubledFloat = Double(myFloat);
	DoubledDouble = Double(myDouble);
	DoubledChar = Double(myChar);
	
	cout << "DoubledInt :" << DoubledInt << "\n";
	cout << "DoubledLong :"<<DoubledLong << "\n";
	cout << "DoubledFloat :"<<DoubledFloat << "\n";
	cout << "DoubledDouble :"<<DoubledDouble << "\n";
	cout << "DoubledChar :"<<DoubledChar << "\n";
	return 0;
	
}

int Double(int original)
{
	cout << "in Double(int)\n";
	return 2*original;
}
long Double(long original){
	cout << "in Double(long)\n";
	return 2*original;
}
float Double(float original){
	cout << "in Double(float)";
	return 2*original;
}
double Double(double original){
	cout << "in Double(float)";
	return 2*original;
}
char Double(char original){
	cout << "in Double(char)";
	return 'original  original';
}
