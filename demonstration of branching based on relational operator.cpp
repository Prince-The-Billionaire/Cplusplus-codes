//demonstrates if statement used with relational operator
#include <iostream>

int main(){
	using std::cout;
	using std::cin;
	
	int me_score, you_score;
	cout << "Enter the score for me : ";
	cin >> me_score;
	cout << "\n Enter the score for you : ";
	cin >> you_score;
	cout << "\n";
	
	
	if (me_score > you_score){
		cout << "lets go me you good!! \n";
	}
	if (me_score < you_score){
		cout << "Lets go you !! \n";
	}
	if (me_score == you_score){
		cout << "A tie? Naah can't be. \n";
		cout << "Give me the real score for you : ";
		cin >> you_score;
		
		if (me_score > you_score){
			cout <<"I knew it lets go me!! \n";
		}
		if (me_score < you_score){
			cout << "I KNEW IT GO YOU!!!!";	
		}
		if (me_score == you_score){
			cout << "wow it really was a tie";
		}
	}
	cout << "\n talks for telling me \n";
	return 0;
}
