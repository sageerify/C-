//C++ program for even and odd.
/*Check If a Number is Even or Odd
Objective: Use an if-else structure to check if a given number is even or odd.
Instructions:
Prompt the user to input an integer.
Use an if statement to check if the number is divisible by 2.
If true, display “The number is even”; otherwise, display “The number is odd.”
*/
#include<iostream>
using namespace std;
int main(){
	int number;
	//promt user for input
	cout<<"Enter an inter:";
	cin>>number;
	//Check if the number is even or odd
	if(number % 2==0){
		cout<<"The number is even."<<endl;
		
	}
	else{
		cout<<"The number is odd."<<endl;
	}
	return 0;
}
