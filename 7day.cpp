//----------------getPivoted element--------------//

#include<iostream>
using namespace std;

int getPivoted(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==arr[0]){
            s=mid+1;
        }else{
            e=mid;
        }
    }
    return s;
}

int main(){
    int arr[5] = {3,8,10,17,1};

    cout<<"pivoted element is" << getPivoted(arr,5);
}


//-------------------square root using binary search-----------------//

#include<iostream>
using namespace std;

int squareRoot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e){
        int square = mid*mid;
        if(square==n){
            ans==mid;
        }else if(square<n){
             e=mid-1;
        }else{
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}

//------------------selection sort------------//

#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
   
    for(int i = 0;i<n-1; i++) {
    int minIndex = i;
    for (int j = i + 1; j < n; j++) {
        if (arr[minIndex] > arr[j]){
            minIndex = j;
        }
    }
    swap(arr[minIndex], arr[i]);
    }
}

