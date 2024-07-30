//Introduction to Vector

//Vectors in c++

//It is a dynamic array that shrinks and expands its size depending on the number of added elements.

//Suppose we have an array of size 4 i.e then the vector will automatically make it of size 2x i.e 8



#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    //ways to create and initalise vectors.

vector<int> a;

vector <int> b(5,10); // means we have 5 elements with value 10  (n,0)--> n elements with value 0;

vector< int> c(b.begin(),b.end());

vector<int> d{1,2,3,10,14};

// iterations over the vector // similar to array

for(int i=0; i<c.size(); i++){
    
    cout<<c[i]<<",";
}

cout <<endl;

//another way to iterate

//inside vector class there is iterator defined: vector<int> :: iterator

for(auto it=b.begin();it!=b.end();it++){
        
      //  if we want to replace auto then needs to write vector<int> :: iterator, it is basically the pointer of the dynamic array.
    
cout<<(*it)<<",";

}

//for each loop, means each element of vector d

for(int x:d){
    
    cout<<x<<",";
    }
    
cout<<endl;


vector<int> v;
int n;
cin>>n;

for(int i=0;i<n;i++){
    int no;
    cin>>no;
    v.push_back(no);
    
    // push back operation add value of new element at last of vector and if memory is not avaliable then it expands
    //Expansion is done by 2x of current memory size
    // and in case of linear memory if space is not avaliable then it finds the memory with required space first for proper allocation,
    // copies last elements and add them to the new memory.
    //original data deleted and new allocated, that's why doubling or allocation of new memory is an expensive operation.
    
    
    
}

for(int x:v){
    
    cout<<x<<",";
}

cout<<endl;


// we have created  2 vectors d and v, needs to understand at memory level the differences in between these 2 vectors


cout<<v.size()<<endl;//how many element has already been occupied.
cout<<v.capacity()<<endl;// size of underlying vector array
cout<<v.max_size()<<endl; //maximum number of elements a vector can hold acc. to avaliable memory in the system.
//
//
//



cout<<d.size()<<endl;//how many element has already been occupied.
cout<<d.capacity()<<endl;// size of underlying vector array
cout<<d.max_size()<<endl; //maximum number of elements a vector can hold acc. to avaliable memory in the system.



return 0;

}
