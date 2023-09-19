#include<bits/stdc++.h>
using namespace std;
int firstOccurance(int arr[],int n, int target){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
         int midElem=arr[mid];
         if(midElem==target){
             ans=mid;
             end=mid-1;
         }
         if(target<midElem){
             end=mid-1;
         }
         if(target>midElem){
             start=mid+1;
         }
         mid=start+(end-start)/2;
    }
    return ans;
}
int lastOccurance(int arr[],int n, int target){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
         int midElem=arr[mid];
         if(midElem==target){
             ans=mid;
             start=mid+1;
         }
         if(target<midElem){
             end=mid-1;
         }
         if(target>midElem){
             start=mid+1;
         }
         mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int n;
    //cin>>n;
    int arr[]={3,4,5,5,5,8,8,12};
    int target=8;

    int ansFirst=firstOccurance(arr,8,target);
    int ansLast=lastOccurance(arr,8,target);

    cout<<"total no of occurances: " <<ansLast-ansFirst+1;
    //cout<<binary_search(arr,arr+7,target);


}