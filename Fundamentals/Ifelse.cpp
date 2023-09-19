#include<iostream>
using namespace std;

int main(){
	int a,b;
	cout<<" enter the numbers" <<endl;
	cin >> a >>b ;
	
	/* if(a==b){
		cout<< "Hey these are equals" <<endl;
	}else{
		cout<< "Not equals" <<endl;
	} */
	
	if(a==b){
		cout<< "Hey these are equals" <<endl;
	}
	else if(a<b){
		cout<< "A is smaller" << endl;
	}
	else{
		cout<< "A is greater" <<endl;
	}
}
