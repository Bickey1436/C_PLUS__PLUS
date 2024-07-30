
#include<iostream>
#include<vector>

using namespace std;

int main(){

vector <int> d{1,2,3,4,5,6};

//push back operation of order 1 i.e o(1) but expanding memory may take time.

d.push_back(16);

//pop back operation removes the last element and it is also of order 1 i.e o(1)

d.pop_back();

// Adding some elements in the middle, 100 will be added to the 3rd index i.e 4th position. and
// if we want to add elements 100, 5 times then its shown below.
// Complexity is o(N);


d.insert(d.begin()+3,5);

d.insert(d.begin()+3,5,100)

// Erase some elements in middle.

d.erase(d.begin()+2);
d.erase(d.begin()+2,d.begin()+5);

cout<<d.size()<<endl;
cout<<d.capacity()<<endl;

// we avoid shrink

// current size-10 with 4 elements
//wont be less than 10, but can be more than 10

d.resize(8);
cout<<d.capacity()<<endl;

d.clear() // clears all elements but capacity doesn't changes.

if(d.empty()){
    
    cout<<"its empty Vector"<<endl;
}

cout<<d.front()<<endl; // front element
cout<<d.back()<<endl; //back element



//Reserve

int n;
cin>>n;



vector<int> v;
for(int 1=0;i<n;i++){
        
    int no;
    cin>>no;
    v.push_back(no);
    
    //changing capacity
    
    cout<<"changing capacity"<<v.capacity()<<endl;
    
    
}

cout<<"capacity"<<v.capacity()<<endl;


//considering for large inputs, doubling is very expensive function , so we will use reserve function.

v.reserve(1000);

for(int x:v){
    
    cout<<x<<",";
}




for (int x:d){
    
    cout<<x<<",";
}
endl;



return 0;


}

