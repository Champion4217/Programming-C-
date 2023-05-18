//----------------Initialising the value of 1 to the entire array----------//
#include<bits/stdc++.h>
using namespace std;
int main(){
     int n=10;
     int arry[n];
    
     int val = 1;
     for (int i =0;i<n;i++){
          arry[i]=val;
        
     }
     for (int i =0;i<n;i++){
         cout<<arry[i];
     }
}

//------------------Min and max value in a array-------//

#include<bits/stdc++.h>
using namespace std;

int getMax(int num[], int n){
    int max = INT_MIN;
    for (int i =0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}

int getMin(int num[], int n){
    int min = INT_MAX;
    for (int i =0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}

int main(){
    int size;
    int num[size];
    cin>>size;
    for(int i =0;i<size;i++){
        cin>>num[i];
    }
    cout<<getMax(num,size)<<endl;
    cout<<getMin(num,size)<<endl;
}

//-------------------Alternate Swapping-------------//

#include<bits/stdc++.h>
using namespace std;

void altSwap(int arr[],int n){
    for(int i =0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    altSwap(arr,n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}