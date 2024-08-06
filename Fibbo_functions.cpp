#include<iostream>
using namespace std;


void fibo(int n){

long long int a=0;
long long int b=1;
long long int c;

for(int i=0;i<=n;i++){



    if(i==0){
        cout<<a<<" ";
    }

   else if(i==1){

        cout<<b<<" ";
    }

    else{
            c=a+b;
            a=b;
            b=c;

            cout<<c<<" ";


    }
}


}


int main(){


int n;
cin>>n;

fibo(n);





}
