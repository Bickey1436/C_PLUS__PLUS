
//sorting the car distance with its coordinate (x,y).

//Vectors + pair +sorting


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//comparing the distance of one care with another 

bool compare(pair<int,int> p1, pair<int,int> p2){

    int d1=p1.first*p1.first + p1.second*p1.second;
    int d2=p2.first*p2.first + p2.second*p2.second;

    if(d1==d2){

        return p1.first<p2.first;
    }


    return d1<d2;


    }

int main(){



int n;
cin>>n;

int x,y;

vector<pair<int,int>> v;

for(int i=0;i<n;i++){

    cin>>x>>y;

    v.push_back(make_pair(x,y));

}

// the sort function applied over the pair and comparing each pair(x,y) with another in vector
sort(v.begin(),v.end(),compare);


//for each loop


for(auto p:v){

    cout<<"car"<<p.first<<","<<p.second<<endl;
}






}
