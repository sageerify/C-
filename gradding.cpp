/*Grading System Based on Marks
Objective: Use an else-if ladder to assign a grade based on a score.
Instructions:
Prompt the user to enter their score (0-100).
Use an else-if structure to determine the grade:
90-100: Print “Grade A”
80-89: Print “Grade B”
70-79: Print “Grade C”
60-69: Print “Grade D”
Below 60: Print “Fail”
*/
#include<iostream>
using namespace std;
int main(){
	int score;
	cout<<"Enter your score (0-100): ";
	cin>>score;
	if(score >=90) cout<<"Grade A"<< endl;
	else if(score >=80) cout<<"Grade B"<< endl;
	else if (score >=70) cout<<"Grade C"<< endl;
	else cout<<"Fail"<<endl;
}
