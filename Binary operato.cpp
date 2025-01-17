//C++ program to demonstrate the Binary Operators.
#include<iostream>
using namespace std;
int main()
{
	int a=10, b=5;
	//arthematic operatore
	cout<<"a+b="<<a+b<<endl;
	cout<<"a-b="<<a-b<<endl;
	//relatinal operators
	cout<<"a>b:"<<(a>b)<<endl;
	cout<<"a==b:"<<(a==b)<<endl;
	//logical operators
	 cout << "(a > 5 && b < 10): " << ((a > 5) && (b < 10)) << endl;
	 //Bitwise operators
	 cout<<"a&b="<<(a&b)<<endl;
	 cout<<"a | b="<<(a | b)<<endl;
	
	return 0;
}

