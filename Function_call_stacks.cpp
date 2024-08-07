
//LIFO-last in first out.
//concept of stack memory imp to understand hoe the profram is being executed.



#include<iostream>
using namespace std;


/*long long int fact(int n){

    long long int i;
    long long int j=1;

for( i=1;i<=n;i++){

    j=j*i;
}
return j;
}

int main(){


int n;
cin>>n;

int r;
cin>>r;

int r1=n-r;

long long int k=fact(n);
long long int p=fact(r);
long long int m=fact(r1);

cout<<k/(p*m)<<endl;


}*/



//-----------------------------------------------------------------------------------------------------------------------------------------



int fact(int n){

    int i;
    int ans=1;

    for(int i=1;i<=n;i++){

        ans=ans*i;
    }


    return ans;


}


int ncr(int n, int r){


int j=fact(n);
int k=fact(r);
int l=fact(n-r);

return j/(k*l);

}


#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int r;
cin>>r;


fact(n);

ncr(n,r);

cout<<ncr(n,r)<<endl;



}


