#include<iostream>
using namespace std;

int main(){
	int a=10;
	int b=18;
	int c=a+b;
	
	cout<< c <<endl;
	
	float f = 10.43;
	
	
	double d=18.98;
	
	bool bl= true;
	
	char ch='x';
	
	cout << f <<" "<< d <<" "<< bl <<" "<< ch <<endl;
	
	int size1=sizeof(f);
	int size2=sizeof(d);
	int size3=sizeof(bl);
	int size4=sizeof(ch);
	
	cout << size1<<" "<< size2 <<" "<< size3 <<" "<< size4 <<endl;
	
}
