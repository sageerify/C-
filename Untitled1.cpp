#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any alphabet(a to z)";
    cin>>ch;
    switch (ch)
    {
    	case 'a':
    		case 'e':
    			case 'i':
    				case 'o':
    					case 'u':
    						cout<<ch<<"Is a Vowel";
    						break;
    						default:
    						cout<<ch<<"Is a consonent";
	}
    return 0;
}
