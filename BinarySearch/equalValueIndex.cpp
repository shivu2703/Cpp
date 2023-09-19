#include<bits/stdc++.h>
using namespace std;
int equalvalveIndex(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==mid){
            return mid;
        }
        if(mid>arr[mid]){
            s=mid+1;
        }
        if(mid<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    int n;
    int arr[]={-3,-1,1,2,4,8};
    int ans=equalvalveIndex(arr,6);
    cout<< "index where value is equal to index: "<< ans;
}