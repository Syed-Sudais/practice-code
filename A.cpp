#include <iostream>
using namespace std;

int main()
{
	int bill;
	cout<<"What is your final bill : ";
	cin>> bill;
	
	if(bill>500){
		cout<<"You got 20% discount.";
	}else{
		
		cout<<"You got 10% discount.";
	}
}

