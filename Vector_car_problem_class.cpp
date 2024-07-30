//class, vector, sorting


#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;

class car{

 public:
 string car_name;
 int x;
 int y;

 //empty constructor

 car(){

 }

 //parameterised constructor
 car(string n, int x, int y){

 car_name=n;
 this->x=x;
 this->y=y;

 }



 int distance(){

 return x*x +y*y;

 }


};


bool compare(car A, car B){

 int da=A.distance();
 int db=B.distance();

 if(da==db){

    return A.car_name.length()<B.car_name.length();
 }

 return da<db;

 };



int main(){

vector <car> v;
int n;
cin>>n;

int x,y;
string name;

for(int i=0;i<n;i++){

    cin>>name>>x>>y;

    car temp(name,x,y);

    v.push_back(temp);


}

sort(v.begin(),v.end(),compare);

for(auto c:v){

    cout<<"car "<<c.car_name<<" dist "<<c.distance()<<" location "<<c.x<<" "<<c.y<<endl;
}


};

