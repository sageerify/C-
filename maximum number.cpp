/*Find the Maximum of Two Numbers
Objective: Use an if-else structure to determine the larger of two numbers.
Instructions:
Ask the user to input two numbers.
Use an if-else statement to compare the two numbers.
Print the larger number with a message.*/
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout<<"Enter two number:";
	cin>>a >>b;
	if(a>b){
	
	cout<<"The larger number is:"<<a <<endl;
}
	else{
		cout<<"The larger is "<<b<<endl;
	}
	return 0;
	
}

