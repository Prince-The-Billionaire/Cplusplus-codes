//demonstrate the use of postfix and prefix increment and decrement  operator
#include <iostream>

int main(){
	using std :: cout;
	int my_age = 16;
	int your_age = 16;
	cout << "I am :" <<my_age << "Years old \n";
	cout << "You are :" << your_age << "Years old \n";
	my_age ++;   //postfix increment
	++your_age;
	cout << "One year passes ......... \n";
	cout << "I am : "<<my_age << "Years old \n";
	cout << "You are : " << your_age << "Years old \n";
	cout << "Another year passes \n";
	cout << "I am : "<<my_age++ << "Years old \n";
	// the value for my age above is 17 because it collect the variable before incrementing it
	cout << "you are"<< ++your_age <<"Years old \n";
	cout << "lets print it again!! \n";
	cout << "I am : "<<my_age<<"Years old \n";
	cout << "You are :"<<your_age<<"Years old \n";
	return 0;
}

