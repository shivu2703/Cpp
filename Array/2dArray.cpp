#include<iostream>
using namespace std;
void colwiseSum(int arr[4][3],int row,int col){
     for(int i=0;i<col;i++){
         int sum=0;
        for(int j=0;j<row;j++){
            sum+=arr[i][j];
        }
        cout<< sum <<" ";

        
        
    }
}
bool target(int arr[3][3], int targetNo,int row,int col){
   for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==targetNo)
            {
                return true;
            }
        }
        
        
    }
    return false;
}
int main(){
    int arr[4][3]={5,1,2,2,3,1,3,4,6,8,10,9};
    int m=4;
    int n=3;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //cout<< target(arr,13,3,3) ;
    colwiseSum(arr,4,3);
}