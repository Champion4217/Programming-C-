//------------------Unique element function---------------------//
#include<iostream>
using namespace std;

int UniqueElement(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];

    }
    return ans;
}


//--------------------Binary search------------//

#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int n, int k){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid =(s+(e-s/2));
        if(mid==k){
            return mid;
        }else if(mid>k){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>n;
    }
    int k;
    cin>>k;
    cout<<BinarySearch(arr,n,k);
    return 0;
}