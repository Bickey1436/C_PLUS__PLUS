#include<iostream>
using namespace std;


void prime(int n){

int i;
int no;



for( no=2; no<n;  no++){
    
    for(i=2; i<no; i++){
        
        if(no%i==0){
            break;
        }
        
         
        
    }
    
    if(i==no){
            
            cout<<no<<" ";
        }
        
    
   
}


}

int main(){


int n;
cin>>n;

prime(n);


}
