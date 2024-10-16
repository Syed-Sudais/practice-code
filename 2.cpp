#include <iostream>
using namespace std;

int main()
{
	int Grades;
	
	cout<<"Calculate the grades of the students";
	
	cout<<"Enter the Grades";
	cin>>Grades;
	
	if(Grades>=90){
		cout<<"Excellent";
}
    else if(Grades>=75){
    	cout<<"Good";
	}
	else if(Grades>=50){
		cout<<"Average";
	}
	else if(Grades<50){
		cout<<"Yor Grades are poor";
	}
}
