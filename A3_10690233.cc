#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int score;
int main() {
	
	cout << "Please enter your exam score to see your grade:" << endl;

	cin >> score;

if (score >= 80 && score <= 100){

	cout << "You got an A with 12 grade points (GPT)." << endl;

}


else if (score >= 75 && score <= 79){

	cout << "You got a B+ with 10.5 grade points (GPT)." << endl;
}

else if (score >= 70 && score <= 74){

	cout << " You got a B with 9 grade points (GPT)." << endl;

}


else if(score >= 65 && score <=69){
	
	cout<< " You got a C+ with 7.5 grade points (GPT)." << endl;

}


else if( score >= 60 && score <= 64){

	cout << " You got C with 6 grade points (GPT)." << endl;

}


else if( score >= 55 && score <= 59){

	cout << " You got a D+ with 4.5 grade points (GPT)." << endl;

}


else if( score >= 50 && score <= 54){

	cout << " You got a D with 3 grade points (GPT)." << endl;
}


else if( score >= 45 && score <= 49){

	cout << " You got an E with 1.5 grade points (GPT)." << endl;
}


else if( score >= 0 && score <= 44){

	cout << " You got an F with 0 grade points (GPT)." << endl;
} 

else {
	cout << " Please enter a valid score." << endl;
}


return 0;

}
