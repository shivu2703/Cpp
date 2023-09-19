#include<iostream>
using namespace std;
void square(int n){
    for(int i=1;i<=n;i++){
        cout<< i*i <<" ";
    }
}
void evenNumber(int n){
    for(int i=2;i<=15;i=i+2){
        if(i%2==0){
            cout<<i <<" ";
        }
    }

}
void factorial(int n){
    int fact=1;
    for(int i=n;i>0;i--){
      fact=fact*i;

    }
    cout<< "factorial of n " << fact ;
}

int main(){
    int n=5;
    //evenNumber(n);
    //square(n);
    factorial(n);
}