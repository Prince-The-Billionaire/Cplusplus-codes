//demonstrates the use of default parameter values
#include <iostream>

int AreaCube(int length,int width = 25,int height = 1);

int main(){
	using std::cout;
	using std::endl;
	int length = 100;
	int width = 50;
	int height = 2;
	int area;
	
	area = AreaCube(length,width,height);
	cout << "First Area equals to :" << area << "\n";
	area = AreaCube(length,width);
	cout << "Second Area equals to :" << area << "\n";
	area = AreaCube(length);
	cout << "Third Area equals to :" << area << "\n";
	return 0;
} 
int AreaCube(int length, int width, int height){
	return(length*width*height);
}
