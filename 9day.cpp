//----------array questions-------//

#include<iostream>
#include<vector>
using namespace std;

vector<int>reverse(vector<int>v){
    int s=0;
    int e=v.size()-1;

    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void printVector(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    cout<<endl;
}

int main(){
     vector<int>v;

     v.push_back(11);
     v.push_back(4);
     v.push_back(3);
     v.push_back(1);
     v.push_back(2);

     vector<int>ans=reverse(v);

     printVector(ans);

}


//--------------merge 2 sorted array-------//

#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[],int n, int arr2[] ,int m ,int arr3[]){
     int i,j,k=0;
     while(i<n&&j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }else{
            arr3[k]=arr2[j];
            k++;
            j++;

        }
     }
     while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
     }
     while(j<n){
         arr3[k]=arr2[j];
        k++;
        j++;
     }   
}

void print(int arr[],int f){
    for(int i=0;i<f;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr2[5]={1,3,5,7,9};
     int arr2[3]={2,4,6};

     int arr3[8]={0};

     merge(arr2 , 5, arr2, 3 ,arr3);

     print(arr3,8);
}

//----------leetcode questions-----//

class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
        if(nums[n-1]>nums[0]){
            count++;
        }
        return count<=1;
    }
};


//-------------//

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
    }
};

//------------------//

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>temp(nums.size());
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()]=nums[i];
        }
        nums=temp;
    }
    
};