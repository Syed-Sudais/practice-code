#include <iostream>
using namespace std;

int main(){
	
	int temp;
	int fuel;
	int pressure;
	
	cout<<"What is your car Temperature : ";
	cin>>temp;
	
	cout<<"What is the percentage of your car fuel : ";
	cin>>fuel;
	
	cout<<"what is your car pressure : ";
	cin>>pressure;
	
	if(temp>95){
	     cout<<"your car is over heating."<<endl;	
	}if(fuel<10 || pressure<25){
		cout<<"your car is malfunctioning.";
	}
	
	return 0;
}
