#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int arr[50];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<< "array is :" ;
	for (int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
}
