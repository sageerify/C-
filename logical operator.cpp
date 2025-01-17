//C++ program to demonstrate the logical operators and ternary or conditional operators
#include<iostream>
using namespace std;
int main(){
	int a=10, b=5;
	//logical operators
    cout << "(a > b && b > 0): " << ((a > b) && (b > 0)) << endl;
    cout << "(a < b || b > 0): " << ((a < b) || (b > 0)) << endl;
	return 0;
}
