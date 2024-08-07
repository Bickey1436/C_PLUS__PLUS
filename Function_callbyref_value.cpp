
#include<iostream>
using namespace std;



//while calling by value, x is not getting updated beCAUSE A IS GETING UPDATED, not x when we go through pseudo code, we will see.



//call by value
/*void Update( int x){

    x=x+1;

    cout<<"value of a        "<< x<<endl;

}*/

//call by reference
void Update( int  &a){

    a=a+1;

    cout<<"value of a        "<< a<<endl;


}



int main(){

int x=13;
int a=11;

cout<<"before update x is  "<<x<<endl;
cout<<"before update a is  "<<a<<endl;

//x=x+1;

Update(x);
Update(a);

cout<<"after update x is  "<<x<<endl;
cout<<"after update a is  "<<a<<endl;


}
