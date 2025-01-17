#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n,close;
	cout<<"Enter 1 to continue:";
	cin>>close;
	while(close!=0){
	cout<<"Enter the number whose table is required:";
	cin>>n;
	for(int y=1;y<=20;y++){
		cout<<n<<" x "<<y<<" = "<<n*y<<endl;
	}
	cout<<"0 to close the program and 1 to continue the program:"<<endl;
	cin>>close;
	}
	
	return 0;
}
