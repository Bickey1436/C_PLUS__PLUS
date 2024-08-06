#include<iostream>
using namespace std;


//forward decleration
int multiply(int, int); //two arguments have been achieved. just defines that function has been created. and can be used lateron





int main(){


int a=10;
int b=20;

   int z= multiply(a,b); ///now z can be stored somewhere else, if not stored as z then, it cannot be used anywhere.



   cout<<z<<endl;
   cout<<multiply(a,b)<<endl;


}

int multiply(int a, int b){   //if this function is decleared below main function then it will give error of undecleration. because of line by line execution.


  int product =a*b;

  return product;



}





//NOTE: suppose we have 2 functions a nd b , if b calls the function a then function a must be defined before the function b;
