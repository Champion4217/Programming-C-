//-------------bubble sort----//

#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    
    for(int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}


//-----insertion sort----//

#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            } else {
              break;
            }
        }
        arr[j+1]=temp;
    }
    
}