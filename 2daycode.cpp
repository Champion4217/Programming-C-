// Prime no. between two numbers given by user//
#include<iostream>
using namespace std;
/*int main(){
    int a,b,i,j,k =0;
    cin>>a>>b;
    for (i=a;i<=b;i++){
        for (j=1;j<=i;j++){
            if(i%j==0)
            k++;
            else
            continue;
        }
        if(k==2)
        cout <<i ;
        k=0;

    }
    return 0 ;
}*/

//----------------------Patterns------------//

/*int main(){
    int r,c,i,j;
    cout<<"Input column"<<endl;
    cin>>c;
    cout<<"Input row"<<endl;
    cin>>r;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            cout<<"*" ; 
        }
        cout<<endl;
    }
    return 0;
}*/

/*int main(){
    int r,c,i,j,g,f;
    cout<< "rows"<<endl;
    cin>>r;
    cout<<"columns"<<endl;
    cin>>c;
    for(g=1;g<=c;g++){
        cout<<"*";
    }
    cout<<endl;
    for(i=2;i<r;i++){
        for(j=1;j<=c;j++){
            if(j==1||j==c)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    for(f=1;f<=c;f++){
        cout<<"*";
    }
    return 0;
}*/

// -----Inverted Half Pyramid----- //

int main(){
    int i,j,rows;
    cin>>rows;
    for (i=1; i<=rows;i++){
        for(j=rows;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}