#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[3][4], int target ){
     for(int i =0; i<3;i++){
        for(int j=0; j<4;j++){
            if(arr[i][j]==target){
                return 1;
            }
            
        }
    }
    return 0;
}

int main(){
    int n, m ;
    cin>>n>>m;
    int arr[n][m];
    
    for(int i =0; i<n;i++){
        for(int j=0; j<m;j++){
            cin>>arr[i][j];
        }
    }
    
     for(int i =0; i<n;i++){
        for(int j=0; j<m;j++){
            cout<<arr[i][j]<< " ";
           
        }
         cout<<endl;
    }
    
    cout<< "Enter the element to search" ;
    
    int target;
    cin>> target;
    
    if(isPresent(arr, target )){
        cout<< "Element Found";
    }else{
        cout<<"Not Found";
    }
}
