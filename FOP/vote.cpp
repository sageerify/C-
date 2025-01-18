/* Check Voting Eligibility
Objective: Use an if-else statement to check if a user is eligible to vote.
Instructions:
Prompt the user to enter their age.
If age is 18 or older, print "You are eligible to vote."
If age is less than 18, print "You are not eligible to vote."
*/
#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your age:";
	cin>> age;
	if(age>=18){
		cout<<"You are eligible to vote"<<endl;
		
	}
	else{
		cout<<"You are not eligible to vote"<<endl;
	}
	return 0;
}
