//----------first and last position of an element in a sorted array -----//
 #include<bits/stdc++.h>
 using namespace std;

 int firstOcc(int arr[],int n, int k){
    int s=0;
    int e=n-1;
    int ans =-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }else if(arr[mid]>k){
              e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return ans;
 }

 int lastOcc(int arr[],int n, int k){
    int s=0;
    int e=n-1;
    int ans =-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }else if(arr[mid]>k){
              e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return ans;
 }
int main(){
 int n;
 cin>>n;
int arr[n];
int k;
cin>>k;
for(int i=0; i<n;i++){
    cin>>arr[i];
}
cout<<firstOcc(arr,n,k)<<endl;
cout<<lastOcc(arr,n,k)<<endl;

return 0;

}