# include <iostream>
using namespace std;

int main(){
	
	// Peogram for income Tax on salary
	
	float salary,tax;
	
	
	cout<<"Enter Your Salary : ";
	cin>>salary;
	
	if(salary <= 10000){
		
		tax=0;
		
	}else if(salary >10000 && salary <=30000){
		
		tax=0.10 * (salary - 10000);
		
	}else if(salary >30000 && salary <=50000){
		
		tax=0.10 * (salary - 10000) + 0.20 * (salary - 30000);
		
	}else if(salary >50000){
		
		tax=0.10 * (salary - 10000) + 0.20 * (salary - 30000) + 0.30 * (salary - 50000);
	}
	
	cout<<"Your Tax is : "<<tax<<"$";
	
	return 0;
}
