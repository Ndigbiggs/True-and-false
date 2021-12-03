//137307 Michael Ndigi
#include <iostream>
using namespace std;

int Check_even(int);
int Check_even(int x){
	int result;
	if(x % 2 == 0){
		cout<< x <<" :it is TRUE"<<endl;
	
	}else
		cout<< x <<" :it is FALSE"<<endl;
		
	return result;
}

int main(){
	int y;
	cout<<"Please enter number to see if it's TRUE or FALSE:"<<endl;
	cin>> y;
	cout<<"\n"<< Check_even(y)<<endl;
	
	return 0;
	
}
