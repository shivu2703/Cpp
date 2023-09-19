#include<iostream>
using namespace std;

void selectionSort(int input[],int n){
	for(int i=0;i<n-1;i++){
		int min=input[i], minIndex=i;
		for(int j=i+1;j<n;j++){
			if(min>input[j]){
			min=input[j];
			minIndex=j;
		}
	}
	    //swap the numbers
		int temp=input[i];
		input[i]=min;
		input[minIndex]=temp;
	}
}

int main(){
	cout<<"enter the array size" <<endl;
	int n;
    cin >> n;
    int input[n];
    cout<< "enter the array element" <<endl;
    for(int i=0;i<n;i++){
 	cin>> input[i];
    }

	selectionSort(input,n);

    cout<< "Sorted array " <<endl;
	for(int i=0;i<n;i++){
		cout<< input[i] << " ";
	}
}
