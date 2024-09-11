//demonstrates multiple return statements
#include <iostream>

int Doubler(int AmountToDouble);//function prototype

int main(){
	using std::cout;
	int result = 0;
	int input;
	
	cout << "Enter a number between 0 and 10,000 to double: ";
	std :: cin >> input;
	cout << "\nBefore the doubler is called....";
	cout << "\ninput : "<<input <<" doubled: " << result <<"\n";
	
	result = Doubler(input);
	
	cout << "\nBack from Doubler...\n";
	
	cout << "\ninput: " << input << "  doubled: " << result << "\n";
	
	return 0;
}

int Doubler(int Original){
	if(Original <= 10000 ){
		return Original*2;
	}
	else{
		return -1;
	}
	std::cout << "you can't  get here!\n";
}
