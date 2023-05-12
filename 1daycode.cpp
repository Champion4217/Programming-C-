#include<iostream>
using namespace std;
/*//int main(){
    int a; 
    a = 12;
    cout<< sizeof(int)  << sizeof(a)<< endl;
}*/

/*int main(){
    int amount1;
    cin>> amount1;

    int amount2;
    cin>> amount2;

    int sum = amount1+amount2;
    cout<< sum<< endl;
}*/


//sum of all natural no till n

/*int main(){
    int n,s = 0;
    for (int i =1; i<=n;i++){
        s=s+i;
    }
    cout<< "sum" <<s;
    return 0;
}*/

// print all no except which are divisible by 3 from 1- 100

/*int main(){
    for (int i =1; i<=100; i++){
        if(i%3==0)
        continue;
        else
        cout<<i;
    }
    return 0;
}*/

int main(){
    int n,k=0;
    cin>>n;
    for ( int i=1;i<=n;i++){
        if (n%i==0)
        k++;
        else
        continue;

    }
    if(k==2)
    cout<< "Prime no.";
    else
    cout<<"Not prime no.";
}
