#include<iostream>
using namespace std;
int main()
{
	char grade;
	cout<<"enter the grade";
	cin>>grade;
	
	switch(grade){
		case 'A':
			cout<<"you are excellent";
			break;
		case 'B':
		    cout<<"you are good";
			break;
		case 'C':
		    cout <<"you are bad";
			break;
			
	default:
	    cout<<"enter only A,B,C grades";	
	}
	
	return 0;
}
