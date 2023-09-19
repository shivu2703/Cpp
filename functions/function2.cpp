#include<iostream>
using namespace std;

void suresh(int k){
    cout<<"suresh integer :"<< k <<endl;
    k++;
}
void rahul(int o){
    cout<<"rahul integer :"<< o <<endl;
    o++;
    suresh(o); 
}
void ramesh(int m){
    cout<<"ramesh integer :"<< m <<endl;
    m++;
    rahul(m);

}

int main(){
    int n=10;
    ramesh(n);
    cout<< "back in main funtion :" <<n<<endl;
    return 0;

}