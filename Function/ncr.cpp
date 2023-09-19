#include<iostream>
using namespace std;
int fact(int n){
    int ans=0;
    for(int i=1;i<=n;i++){
         ans=ans*i;
    }
    return ans;
}
int main(){
    int n,r,n_r;
    //cout<<"hello";
    cin>>n>>r;
    int n_C_r=fact(n)/(fact (r)*fact (n-r));
    cout<<n_C_r<<endl;

}
