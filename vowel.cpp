/*Check if a Character is a Vowel or Consonant
Objective: Use an if-else statement to check if a character is a vowel or consonant.
Instructions:
Prompt the user to enter a single alphabet character.
Use if to check if the character is a vowel (a, e, i, o, u).
If true, print "It is a vowel." Otherwise, print "It is a consonant."
*/
#include <iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter a character:";
	cin>>ch;
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch== 'o' || ch == '0' || ch == 'u' ||
	ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	cout<< "It is a vowel."<<endl;
	else{
		cout<<"It is a consonant."<<endl;
		
		
	}
	return 0;
}
