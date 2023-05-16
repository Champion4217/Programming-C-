#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i =1;i<=n;i++){
        for(int j =1;j<=2*n;j++){
            if(j>i&&j<(n-i)){
                cout<<" ";
            }
            else
                cout<<"*";
            
            
        }
        cout<<endl;
    }
    for(int i=n;i<=n;i--){
        for ( int j =1;j<=2*n;j++){
            if(j>i&&j<(n-i)){
                cout<<" ";
            }
            else
            cout<<"*";
        }
        cout<<endl;
    }
}

//-----------------------Functions----------//

int add(int num1,int num2){
        int sum = num1+num2;
        return sum;
    }


int main(){
    
    int a=2;
    int b =3;
    cout<< add(a,b)<<endl;
    return 0;
}

#include<cmath>
#include<math.h>
bool isPrime(int num){
    for(int i =2;i<=sqrt(num);i++){
        if (num%i==0){
            return false;
        } 
        return true;
    }
}    
int main(){
    int a,b;
    cin>>a>>b;
    for (int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
}

//---------fibenacci sequence--------//

void fib(int n){
    int t1 = 0;
    int t2 = 1;
    int nextterm;
    
    for(int i =1;i<=n;i++){
        cout<<t1<<endl;
        nextterm = t1+t2;
        t1=t2;
        t2=nextterm;
    }
    return ;
} 

int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;
}

int fact(int a){
    int factorial =1;
    for(int i =1;i<=a;i++){
        factorial = i*factorial;
    }
    return factorial;
}

int main(){
    int n,r;
    cin>>n>>r;
    int ans = fact(n)/fact(n-r)*fact(r);
    cout<<ans;
    return 0;
}
