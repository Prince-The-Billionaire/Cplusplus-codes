//demomstration of typedef
#include <iostream>

typedef unsigned short int USHORT;//typedef is defined

int main(){
	using std::cout;
	using std::endl;
	
	USHORT Width = 5;
	USHORT Length;
	Length = 10;
	USHORT Area = Width * Length;
	cout << "width: "<< Width << endl;
	cout << "length :"<< Length << endl;
	cout << "Area : "<<Area << endl;
	return 0;
	
}
