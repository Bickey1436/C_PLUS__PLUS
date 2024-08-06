#include<iostream>
using  namespace std;


 //int product=a*b;

   // return product;

//return keyword.

int multiply(int a, int b){


    return a*b;




}


int main(){

int a=10;
int b=20;

multiply(a,b);

cout<<multiply(a,b)<<endl;


}

//---------------------------------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;



int multiply(int a, int b){

int product=a*b;

return product;



}


float multiply_float(float x, float b){   ///the parameters in function and function definition is independent of decleared things inside the main function.

        return x*b;
}

int main(){
  int a=10;
  int b=20;


 int ans= multiply(a,b);


 float x=10.1; float y=10.11;

  float z= multiply_float(x,y);

  cout<<z<<endl;



 cout<<ans+20<<endl;





}

//readibility is increased.
//reusability is increased.
// code is more organised.





























