#include <iostream>
using namespace std;

int main()
{
	int num1;
	int num2;
	
	cout<<"Enter the First number :";
	cin>>num1;
	
	cout<<"Enter the Second number :";
	cin>>num2;
	
	if(num1>num2){
		
		cout<<"The first is Greater than second number"<<endl;
	
	} 
	
	else if (num1<num2){
		cout<<"The second number is greater than first number";
		
	}
	else{
		cout<<"Both the numbers are equal";
	}

}

