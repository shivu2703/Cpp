#include<iostream>
using namespace std;

void printNumber(int num){ 
    num++;
    cout << "printing the number :"<< num<< endl;
} 

int main(){
      int num=5;
      //cin>> num;
      printNumber(num);
      cout<< "in the main function : "<<num <<endl;
      return 0;
}

