//demonstrates inline function
#include <iostream>

inline int Double(int);
//the inline function is declared thus the compiler doesn't get a real function
//it copies th code from the inline fucntion directly into the calling function
//in this case it copies it 3 times
//been inline means to avoid jumps like other functions


int main(){
	int target;
	using namespace std;
	cout << "Enter a number to work with:";
	cin >> target;
	cout << "\n";
	
	target = Double(target);
	cout << "Target :"<<target<<endl;
	
	target = Double(target);
	cout << "Target:"<<target<<endl;
	
	target = Double(target);
	cout << "Target : "<<target<<endl;
	return 0;
}

int Double(int target){
	return 2*target;
}
