#include<iostream>
using namespace std;


void trailing (int n){

    int j=0;

    for(int i=5;n/i>=1;i=i*5){


        j=j+(n/i);

    }
    cout<<j<<endl;

}

int main(){

   int n;
   cin>>n;

   trailing(n);



}


