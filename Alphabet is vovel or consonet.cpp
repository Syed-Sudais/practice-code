# include <iostream>
using namespace std;

int main(){
	
	// Program for checking if alphabet is Vowel or Consonent
	
	char Alphabet;
	
	cout<<"Enter Alphabet : ";
	cin>>Alphabet;
	
	if(Alphabet == 'A' || Alphabet == 'E'|| Alphabet == 'I'|| Alphabet == 'O' || Alphabet == 'U' || Alphabet == 'a' || Alphabet == 'e' || Alphabet == 'i' ||
	Alphabet == 'o' || Alphabet == 'u'){
		
		cout<<"Alphabet is Vowel";
		
	}else{
		
		cout<<"Alphabet is Consonent";
	}
	
	return 0;
}
