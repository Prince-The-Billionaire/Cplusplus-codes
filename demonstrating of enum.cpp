#include <iostream>

int main(){
	//demonstration of enum 
	enum Days{
		Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday
	};
	// enum enable you to create new types and define variable restricted to a possible set of values
	Days today;
	today = Monday;
	
	if (today == Saturday || today == Sunday){
		std :: cout << "\nGotta' love the weekends !\n";
		
	}
	else{
		std :: cout << "\n back to work";
		
	}
	return 0;
	
}
